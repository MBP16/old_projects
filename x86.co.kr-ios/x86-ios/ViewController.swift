//
//  ViewController.swift
//  x86-ios
//
//  Created by 박현우 on 2020/08/28.
//

import UIKit
import WebKit

class ViewController: UIViewController, WKNavigationDelegate {

    @IBOutlet var webview: WKWebView!
    @IBOutlet var loading: UIActivityIndicatorView!
    
    func loadWebpage(_ url: String) {
        let myUrl = URL(string: url)
        let myRequest = URLRequest(url: myUrl!)
        webview.load(myRequest)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        loadWebpage("https://x86.co.kr/")
        webview.navigationDelegate = self
    }
    
    func webView(_ webView: WKWebView, didCommit navigation: WKNavigation!) {
        loading.startAnimating()
        loading.isHidden = false
    }
    
    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
        loading.stopAnimating()
        loading.isHidden = true
    }
    
    func webView(_ webView: WKWebView, didFail navigation: WKNavigation!, withError error: Error) {
        loading.stopAnimating()
        loading.isHidden = true
    }
    
    @IBAction func Home(_ sender: UIBarButtonItem) {
        loadWebpage("https://x86.co.kr/")
    }
    
    @IBAction func reload(_ sender: UIBarButtonItem) {
        webview.reload()
    }
    
    @IBAction func cancelreload(_ sender: UIBarButtonItem) {
        webview.stopLoading()
    }
    
    @IBAction func Back(_ sender: UIBarButtonItem) {
        webview.goBack()
    }
    
    @IBAction func forward(_ sender: UIBarButtonItem) {
        webview.goForward()
    }
    
    @IBAction func personalinfo(_ sender: UIBarButtonItem) {
        loadWebpage("https://x86.co.kr/index.php?mid=timeline&act=dispMemberInfo")
    }
    
}

