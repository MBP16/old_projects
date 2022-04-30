//
//  AppDelegate.swift
//  ClassTimeTable
//
//  Created by 박현우 on 2021/03/29.
//

import UIKit

@main
class AppDelegate: UIResponder, UIApplicationDelegate {



    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        BeforeClass_Mon()
        BeforeClass_Tus()
        BeforeClass_Wed()
        BeforeClass_Tus()
        BeforeClass_Fri()
        ClassStartAlarm_Mon_1()
        ClassStartAlarm_Mon_2()
        ClassStartAlarm_Mon_3()
        ClassStartAlarm_Mon_4()
        ClassStartAlarm_Mon_5()
        ClassStartAlarm_Mon_6()
        ClassStartAlarm_Mon_7()
        ClassEndAlarm_Mon_1()
        ClassEndAlarm_Mon_2()
        ClassEndAlarm_Mon_3()
        ClassEndAlarm_Mon_4()
        ClassEndAlarm_Mon_5()
        ClassEndAlarm_Mon_6()
        ClassEndAlarm_Mon_7()
        ClassStartAlarm_Tus_1()
        ClassStartAlarm_Tus_2()
        ClassStartAlarm_Tus_3()
        ClassStartAlarm_Tus_4()
        ClassStartAlarm_Tus_5()
        ClassStartAlarm_Tus_6()
        ClassStartAlarm_Tus_7()
        ClassEndAlarm_Tus_1()
        ClassEndAlarm_Tus_2()
        ClassEndAlarm_Tus_3()
        ClassEndAlarm_Tus_4()
        ClassEndAlarm_Tus_5()
        ClassEndAlarm_Tus_6()
        ClassEndAlarm_Tus_7()
        ClassStartAlarm_Wed_1()
        ClassStartAlarm_Wed_2()
        ClassStartAlarm_Wed_3()
        ClassStartAlarm_Wed_4()
        ClassStartAlarm_Wed_5()
        ClassStartAlarm_Wed_6()
        ClassStartAlarm_Wed_7()
        ClassEndAlarm_Wed_1()
        ClassEndAlarm_Wed_2()
        ClassEndAlarm_Wed_3()
        ClassEndAlarm_Wed_4()
        ClassEndAlarm_Wed_5()
        ClassEndAlarm_Wed_6()
        ClassEndAlarm_Wed_7()
        ClassStartAlarm_Thu_1()
        ClassStartAlarm_Thu_2()
        ClassStartAlarm_Thu_3()
        ClassStartAlarm_Thu_4()
        ClassStartAlarm_Thu_5()
        ClassStartAlarm_Thu_6()
        ClassStartAlarm_Thu_7()
        ClassEndAlarm_Thu_1()
        ClassEndAlarm_Thu_2()
        ClassEndAlarm_Thu_3()
        ClassEndAlarm_Thu_4()
        ClassEndAlarm_Thu_5()
        ClassEndAlarm_Thu_6()
        ClassEndAlarm_Thu_7()
        ClassStartAlarm_Fri_1()
        ClassStartAlarm_Fri_2()
        ClassStartAlarm_Fri_3()
        ClassStartAlarm_Fri_4()
        ClassStartAlarm_Fri_5()
        ClassStartAlarm_Fri_6()
        ClassStartAlarm_Fri_7()
        ClassEndAlarm_Fri_1()
        ClassEndAlarm_Fri_2()
        ClassEndAlarm_Fri_3()
        ClassEndAlarm_Fri_4()
        ClassEndAlarm_Fri_5()
        ClassEndAlarm_Fri_6()
        ClassEndAlarm_Fri_7()
        AfterClass_Mon()
        AfterClass_Tus()
        AfterClass_Wed()
        AfterClass_Thu()
        AfterClass_Fri()
        return true
    }

    // MARK: UISceneSession Lifecycle

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }


}

