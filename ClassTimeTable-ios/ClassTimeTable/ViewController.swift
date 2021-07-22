//
//  ViewController.swift
//  ClassTimeTable
//
//  Created by 박현우 on 2021/03/29.
//

import UIKit
import UserNotifications

let Monday_1_subject: String = ""
let Monday_2_subject: String = ""
let Monday_3_subject: String = ""
let Monday_4_subject: String = ""
let Monday_5_subject: String = ""
let Monday_6_subject: String = ""
let Monday_7_subject: String = ""
let TuesDay_1_subject: String = ""
let TuesDay_2_subject: String = ""
let TuesDay_3_subject: String = ""
let TuesDay_4_subject: String = ""
let TuesDay_5_subject: String = ""
let TuesDay_6_subject: String = ""
let TuesDay_7_subject: String = ""
let WednesDay_1_subject: String = ""
let WednesDay_2_subject: String = ""
let WednesDay_3_subject: String = ""
let WednesDay_4_subject: String = ""
let WednesDay_5_subject: String = ""
let WednesDay_6_subject: String = ""
let WednesDay_7_subject: String = ""
let ThursDay_1_subject: String = ""
let ThursDay_2_subject: String = ""
let ThursDay_3_subject: String = ""
let ThursDay_4_subject: String = ""
let ThursDay_5_subject: String = ""
let ThursDay_6_subject: String = ""
let ThursDay_7_subject: String = ""
let FriDay_1_subject: String = ""
let FriDay_2_subject: String = ""
let FriDay_3_subject: String = ""
let FriDay_4_subject: String = ""
let FriDay_5_subject: String = ""
let FriDay_6_subject: String = ""
let FriDay_7_subject: String = ""
let Monday_1_Teacher: String = ""
let Monday_2_Teacher: String = ""
let Monday_3_Teacher: String = ""
let Monday_4_Teacher: String = ""
let Monday_5_Teacher: String = ""
let Monday_6_Teacher: String = ""
let Monday_7_Teacher: String = ""
let TuesDay_1_Teacher: String = ""
let TuesDay_2_Teacher: String = ""
let TuesDay_3_Teacher: String = ""
let TuesDay_4_Teacher: String = ""
let TuesDay_5_Teacher: String = ""
let TuesDay_6_Teacher: String = ""
let TuesDay_7_Teacher: String = ""
let WednesDay_1_Teacher: String = ""
let WednesDay_2_Teacher: String = ""
let WednesDay_3_Teacher: String = ""
let WednesDay_4_Teacher: String = ""
let WednesDay_5_Teacher: String = ""
let WednesDay_6_Teacher: String = ""
let WednesDay_7_Teacher: String = ""
let ThursDay_1_Teacher: String = ""
let ThursDay_2_Teacher: String = ""
let ThursDay_3_Teacher: String = ""
let ThursDay_4_Teacher: String = ""
let ThursDay_5_Teacher: String = ""
let ThursDay_6_Teacher: String = ""
let ThursDay_7_Teacher: String = ""
let FriDay_1_Teacher: String = ""
let FriDay_2_Teacher: String = ""
let FriDay_3_Teacher: String = ""
let FriDay_4_Teacher: String = ""
let FriDay_5_Teacher: String = ""
let FriDay_6_Teacher: String = ""
let FriDay_7_Teacher: String = ""

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        let center = UNUserNotificationCenter.current()
        center.requestAuthorization(options: [.alert, .sound, .badge]) { granted, error in
            
            if error != nil {
                print ("You have to allow notifications access to get time alarms.")
                // Handle the error here.
            }
            
            // Enable or disable features based on the authorization.
        }
    }
}

func BeforeClass_Mon(){
        let content = UNMutableNotificationContent()
        content.title = "🔔조회시간이에요🔔"
        content.subtitle = "아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "08:30 AM ~ 08:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 30
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_B_Mon_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_1(){
        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_1_subject)
        content.body = String(Monday_1_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 50
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_2_subject)
        content.body = String(Monday_2_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 45
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_3_subject)
        content.body = String(Monday_3_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 40
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_4_subject)
        content.body = String(Monday_4_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 35
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_5_subject)
        content.body = String(Monday_5_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 00
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_6_subject)
        content.body = String(Monday_6_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 55
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Mon_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(Monday_7_subject)
        content.body = String(Monday_7_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 50
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Mon_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_1(){

        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 09:35 AM ~ 09:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 35
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 10:30 AM ~ 10:40 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 30
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 11:25 AM ~ 11:35 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 25
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업이 끝났어요🔔"
        content.subtitle = "점심 시간입니다. 맛있는 점심을 먹고 다음 수업을 준비해주세요."
        content.body = "점심시간: 12:20 AM ~ 13:00 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 12
        date.minute = 20
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 13:45 AM ~ 13:55 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 51
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 14:40 AM ~ 14:50 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 40
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Mon_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업이 끝났어요🔔"
        content.subtitle = "모든 수업이 끝났습니다."
        content.body = "수업끝~~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 35
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func AfterClass_Mon(){
        let content = UNMutableNotificationContent()
        content.title = "🔔종례시간이에요🔔"
        content.subtitle = "종례 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "15:35~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 40
        date.weekday = 2
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Mon_8", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func BeforeClass_Tus(){
        let content = UNMutableNotificationContent()
        content.title = "🔔조회시간이에요🔔"
        content.subtitle = "아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "08:30 AM ~ 08:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 30
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_B_Tus", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Tus_1(){
        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_1_subject)
        content.body = String(TuesDay_1_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 50
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Tus_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_2_subject)
        content.body = String(TuesDay_2_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 45
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Tus_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_3_subject)
        content.body = String(TuesDay_3_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 40
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Tus_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_4_subject)
        content.body = String(TuesDay_4_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 35
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Tus_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_5_subject)
        content.body = String(TuesDay_5_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 00
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Tus_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_6_subject)
        content.body = String(TuesDay_6_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 55
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Tus_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(TuesDay_7_subject)
        content.body = String(TuesDay_7_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 50
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Tus_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_1(){

        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 09:35 AM ~ 09:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 35
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 10:30 AM ~ 10:40 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 30
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 11:25 AM ~ 11:35 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 25
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업이 끝났어요🔔"
        content.subtitle = "점심 시간입니다. 맛있는 점심을 먹고 다음 수업을 준비해주세요."
        content.body = "점심시간: 12:20 AM ~ 13:00 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 12
        date.minute = 20
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 13:45 AM ~ 13:55 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 51
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 14:40 AM ~ 14:50 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 40
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Tus_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업이 끝났어요🔔"
        content.subtitle = "모든 수업이 끝났습니다."
        content.body = "수업끝~~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 35
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Tus_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func AfterClass_Tus(){
        let content = UNMutableNotificationContent()
        content.title = "🔔종례시간이에요🔔"
        content.subtitle = "종례 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "15:35~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 40
        date.weekday = 3
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_A_Tus", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func BeforeClass_Wed(){
        let content = UNMutableNotificationContent()
        content.title = "🔔조회시간이에요🔔"
        content.subtitle = "아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "08:30 AM ~ 08:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 30
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_B_Wed", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Wed_1(){
        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_1_subject)
        content.body = String(WednesDay_1_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 50
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Wed_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_2_subject)
        content.body = String(WednesDay_2_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 45
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Wed_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_3_subject)
        content.body = String(WednesDay_3_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 40
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Wed_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_4_subject)
        content.body = String(WednesDay_4_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 35
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Wed_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_5_subject)
        content.body = String(WednesDay_5_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 00
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Wed_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_6_subject)
        content.body = String(WednesDay_6_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 55
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Wed_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(WednesDay_7_subject)
        content.body = String(WednesDay_7_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 50
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Wed_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_1(){

        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 09:35 AM ~ 09:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 35
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 10:30 AM ~ 10:40 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 30
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 11:25 AM ~ 11:35 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 25
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업이 끝났어요🔔"
        content.subtitle = "점심 시간입니다. 맛있는 점심을 먹고 다음 수업을 준비해주세요."
        content.body = "점심시간: 12:20 AM ~ 13:00 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 12
        date.minute = 20
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 13:45 AM ~ 13:55 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 51
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 14:40 AM ~ 14:50 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 40
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Wed_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업이 끝났어요🔔"
        content.subtitle = "모든 수업이 끝났습니다."
        content.body = "수업끝~~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 35
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Wed_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func AfterClass_Wed(){
        let content = UNMutableNotificationContent()
        content.title = "🔔종례시간이에요🔔"
        content.subtitle = "종례 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "15:35~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 45
        date.weekday = 4
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_A_Wed", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func BeforeClass_Thu(){
        let content = UNMutableNotificationContent()
        content.title = "🔔조회시간이에요🔔"
        content.subtitle = "아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "08:30 AM ~ 08:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 30
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_B_Tus", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Thu_1(){
        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_1_subject)
        content.body = String(ThursDay_1_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 50
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Thu_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_2_subject)
        content.body = String(ThursDay_2_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 45
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Thu_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_3_subject)
        content.body = String(ThursDay_3_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 40
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Thu_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_4_subject)
        content.body = String(ThursDay_4_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 35
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Thu_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_5_subject)
        content.body = String(Monday_5_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 00
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Thu_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_6_subject)
        content.body = String(ThursDay_6_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 55
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Thu_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(ThursDay_7_subject)
        content.body = String(ThursDay_7_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 50
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Thu_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_1(){

        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 09:35 AM ~ 09:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 35
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_2(){
    
        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 10:30 AM ~ 10:40 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 30
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 11:25 AM ~ 11:35 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 25
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업이 끝났어요🔔"
        content.subtitle = "점심 시간입니다. 맛있는 점심을 먹고 다음 수업을 준비해주세요."
        content.body = "점심시간: 12:20 AM ~ 13:00 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 12
        date.minute = 20
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 13:45 AM ~ 13:55 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 51
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 14:40 AM ~ 14:50 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 40
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Thu_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업이 끝났어요🔔"
        content.subtitle = "모든 수업이 끝났습니다."
        content.body = "수업끝~~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 35
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Thu_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func AfterClass_Thu(){
        let content = UNMutableNotificationContent()
        content.title = "🔔종례시간이에요🔔"
        content.subtitle = "종례 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "15:35~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 45
        date.weekday = 5
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_A_Thu", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func BeforeClass_Fri(){
        let content = UNMutableNotificationContent()
        content.title = "🔔조회시간이에요🔔"
        content.subtitle = "아침조회 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "08:30 AM ~ 08:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 30
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_B_Fri", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Fri_1(){
        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_1_subject)
        content.body = String(FriDay_1_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 8
        date.minute = 50
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}

func ClassStartAlarm_Fri_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_2_subject)
        content.body = String(Monday_2_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 45
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Fri_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_3_subject)
        content.body = String(FriDay_3_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 40
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Fri_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_4_subject)
        content.body = String(FriDay_4_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 35
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Fri_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_5_subject)
        content.body = String(FriDay_5_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 00
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Fri_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_6_subject)
        content.body = String(FriDay_6_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 55
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassStartAlarm_Fri_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업 시작할 시간이에요🔔"
        content.subtitle = String(FriDay_7_subject)
        content.body = String(FriDay_7_Teacher)
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 50
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CS_Fri_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_1(){

        let content = UNMutableNotificationContent()
        content.title = "🔔1교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 09:35 AM ~ 09:45 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 9
        date.minute = 35
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_1", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_2(){

        let content = UNMutableNotificationContent()
        content.title = "🔔2교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 10:30 AM ~ 10:40 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 10
        date.minute = 30
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_2", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_3(){

        let content = UNMutableNotificationContent()
        content.title = "🔔3교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 11:25 AM ~ 11:35 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 11
        date.minute = 25
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_3", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_4(){

        let content = UNMutableNotificationContent()
        content.title = "🔔4교시 수업이 끝났어요🔔"
        content.subtitle = "점심 시간입니다. 맛있는 점심을 먹고 다음 수업을 준비해주세요."
        content.body = "점심시간: 12:20 AM ~ 13:00 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 12
        date.minute = 20
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_4", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_5(){

        let content = UNMutableNotificationContent()
        content.title = "🔔5교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 13:45 AM ~ 13:55 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 13
        date.minute = 51
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_5", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_6(){

        let content = UNMutableNotificationContent()
        content.title = "🔔6교시 수업이 끝났어요🔔"
        content.subtitle = "쉬는 시간입니다. 물을 마시고 화장실에 다녀온 뒤 다음 수업을 준비해주세요."
        content.body = "쉬는시간: 14:40 AM ~ 14:50 AM"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 40
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_6", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func ClassEndAlarm_Fri_7(){

        let content = UNMutableNotificationContent()
        content.title = "🔔7교시 수업이 끝났어요🔔"
        content.subtitle = "모든 수업이 끝났습니다."
        content.body = "수업끝~~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_End.caf"))
        var date = DateComponents()
        date.hour = 15
        date.minute = 35
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_CE_Fri_7", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
}

func AfterClass_Fri(){
        let content = UNMutableNotificationContent()
        content.title = "🔔종례시간이에요🔔"
        content.subtitle = "종례 시간입니다. 출석체크를 하고 선생님의 말씀을 들어보세요"
        content.body = "15:35~~"
        content.badge = 1
        content.sound = UNNotificationSound.init(named: UNNotificationSoundName(rawValue: "ClassBell_Start.caf"))
        var date = DateComponents()
        date.hour = 14
        date.minute = 45
        date.weekday = 6
        let trigger = UNCalendarNotificationTrigger(dateMatching: date, repeats: true)
        let request = UNNotificationRequest(identifier: "timerdone_A_Fri", content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        
}
