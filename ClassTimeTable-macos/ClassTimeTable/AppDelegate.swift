//
//  AppDelegate.swift
//  ClassTimeTable
//
//  Created by 박현우 on 2021/03/09.
//

import Cocoa
import UserNotifications

@main
class AppDelegate: NSObject, NSApplicationDelegate {
    
    let popover = NSPopover()

    let statusItem = NSStatusBar.system.statusItem(withLength:NSStatusItem.squareLength)
    
    func applicationDidFinishLaunching(_ aNotification: Notification) {
        // Insert code here to initialize your application
        if let button = statusItem.button {
            button.image = NSImage(named:NSImage.Name("StatusBarButtonImage"))
            button.action = #selector(togglePopover(_:))
        }
        popover.contentViewController = SampleViewController.freshController()
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
    }
    
    
    func applicationWillTerminate(_ aNotification: Notification) {
        // Insert code here to tear down your application
    }
    
    @objc func togglePopover(_ sender: Any?) {
      if popover.isShown {
        closePopover(sender: sender)
      } else {
        showPopover(sender: sender)
      }
    }

    func showPopover(sender: Any?) {
      if let button = statusItem.button {
        popover.show(relativeTo: button.bounds, of: button, preferredEdge: NSRectEdge.minY)
      }
    }

    func closePopover(sender: Any?) {
      popover.performClose(sender)
    }
}

