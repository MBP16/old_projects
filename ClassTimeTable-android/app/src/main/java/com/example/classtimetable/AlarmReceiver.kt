package com.example.classtimetable

import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.os.Build
import androidx.core.app.NotificationCompat
import java.util.*

class AlarmReceiver : BroadcastReceiver() {
    override fun onReceive(context: Context, intent: Intent) {
        val notificationManager = context.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        val notificationIntent = Intent(context, MainActivity::class.java)
        notificationIntent.flags = (Intent.FLAG_ACTIVITY_CLEAR_TOP
                or Intent.FLAG_ACTIVITY_SINGLE_TOP)
        val pendingI = PendingIntent.getActivity(
            context, 0,
            notificationIntent, 0
        )
        val builder = NotificationCompat.Builder(context, "default")
        val builder2 = NotificationCompat.Builder(context, "default2")


        //OREO API 26 이상에서는 채널 필요
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            builder.setSmallIcon(R.drawable.main_icon) //mipmap 사용시 Oreo 이상에서 시스템 UI 에러남
            val channelName = "시작/끝 종"
            val description = "수업시간 시작/끝, 조회, 종례시 과목/선생님 이름/쉬는시간/점심시간등의 내용을 담은 알림"
            val importance = NotificationManager.IMPORTANCE_HIGH //소리와 알림메시지를 같이 보여줌
            val channel = NotificationChannel("Class_Bell", channelName, importance)
            channel.description = description
            notificationManager?.createNotificationChannel(channel)
        }
        else builder.setSmallIcon(R.drawable.main_icon) // Oreo 이하에서 mipmap 사용하지 않으면 Couldn't create icon: StatusBarIcon 에러남
        builder.setAutoCancel(true)
            .setDefaults(NotificationCompat.DEFAULT_ALL)
            .setWhen(System.currentTimeMillis())
            .setPriority(NotificationManager.IMPORTANCE_HIGH)
            .setTicker("{Time to watch some cool stuff!}")
            .setContentTitle("\uD83D\uDD14조회시간이에요\uD83D\uDD14")
            .setContentText("아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요")
            .setContentInfo("INFO")
            .setContentIntent(pendingI)
        builder2.setSmallIcon(R.drawable.main_icon) // Oreo 이하에서 mipmap 사용하지 않으면 Couldn't create icon: StatusBarIcon 에러남
        builder2.setAutoCancel(true)
            .setDefaults(NotificationCompat.DEFAULT_ALL)
            .setWhen(System.currentTimeMillis())
            .setPriority(NotificationManager.IMPORTANCE_HIGH)
            .setTicker("{Time to watch some cool stuff!}")
            .setContentTitle("\uD83D\uDD141교시 수업 시작할 시간이에요\uD83D\uDD14")
            .setContentText("아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요")
            .setContentInfo("INFO")
            .setContentIntent(pendingI)
        if (notificationManager != null) {

            // 노티피케이션 동작시킴
            notificationManager.notify(1234, builder.build())
            notificationManager.notify(123, builder2.build())
            val nextNotifyTime = Calendar.getInstance()

            // 내일 같은 시간으로 알람시간 결정
            nextNotifyTime.add(Calendar.DATE, 1)

            //  Preference에 설정한 값 저장
            val editor = context.getSharedPreferences("daily alarm", Context.MODE_PRIVATE).edit()
            editor.putLong("nextNotifyTime", nextNotifyTime.timeInMillis)
            editor.apply()
        }
    }
}