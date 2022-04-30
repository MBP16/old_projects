package com.example.classtimetable

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Build
import android.content.pm.PackageManager
import android.content.ComponentName
import android.content.Intent
import android.app.PendingIntent
import android.app.AlarmManager
import java.util.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val sharedPreferences = getSharedPreferences("daily alarm", MODE_PRIVATE)
        val millis = sharedPreferences.getLong("nextNotifyTime", Calendar.getInstance().timeInMillis)
        val nextNotifyTime: Calendar = GregorianCalendar()
        nextNotifyTime.timeInMillis = millis
        val nextDate = nextNotifyTime.time
        // 현재 지정된 시간으로 알람 시간 설정
        val calendar = Calendar.getInstance()
        val currentTime = nextNotifyTime.time
        calendar.timeInMillis = System.currentTimeMillis()
        calendar[Calendar.HOUR_OF_DAY] = 7
        calendar[Calendar.DAY_OF_WEEK] = 1
        calendar[Calendar.MINUTE]= 36
        calendar[Calendar.SECOND] = 0

        // 이미 지난 시간을 지정했다면 다음날 같은 시간으로 설정
        if (calendar.before(Calendar.getInstance())) {
            calendar.add(Calendar.DATE, 1)
        }
        val currentDateTime = calendar.time
        //  Preference에 설정한 값 저장
        val editor = getSharedPreferences("daily alarm", MODE_PRIVATE).edit()
        editor.putLong("nextNotifyTime", calendar.timeInMillis)
        editor.apply()
        diaryNotification(calendar)
    }

    fun diaryNotification(calendar: Calendar) {
//        PreferenceManager.setDefaultValues(this, R.xml.preferences, false);
//        SharedPreferences sharedPref = PreferenceManager.getDefaultSharedPreferences(this);
//        Boolean dailyNotify = sharedPref.getBoolean(SettingsActivity.KEY_PREF_DAILY_NOTIFICATION, true);
        val dailyNotify = true // 무조건 알람을 사용
        val pm = this.packageManager
        val receiver = ComponentName(this, DeviceBootReceiver::class.java)
        val alarmIntent = Intent(this, AlarmReceiver::class.java)
        val pendingIntent = PendingIntent.getBroadcast(this, 0, alarmIntent, 0)
        val alarmManager = getSystemService(ALARM_SERVICE) as AlarmManager


        // 사용자가 매일 알람을 허용했다면
        if (dailyNotify) {
            if (alarmManager != null) {
                alarmManager.setRepeating(
                    AlarmManager.RTC_WAKEUP, calendar.timeInMillis,
                    AlarmManager.INTERVAL_DAY, pendingIntent
                )
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
                    alarmManager.setExactAndAllowWhileIdle(
                        AlarmManager.RTC_WAKEUP,
                        calendar.timeInMillis,
                        pendingIntent
                    )
                }
            }

            // 부팅 후 실행되는 리시버 사용가능하게 설정
            pm.setComponentEnabledSetting(
                receiver,
                PackageManager.COMPONENT_ENABLED_STATE_ENABLED,
                PackageManager.DONT_KILL_APP
            )
        }
    }
}