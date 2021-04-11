package com.example.x86

import android.content.Intent
import android.os.Bundle
import android.webkit.WebView
import android.webkit.WebViewClient
import android.webkit.CookieManager
import androidx.appcompat.app.AppCompatActivity
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val myWebView: WebView = findViewById(R.id.webview)
        myWebView.settings.javaScriptEnabled = true
        CookieManager.getInstance()
        myWebView.webViewClient = WebViewClient()
        myWebView.loadUrl("https://x86.co.kr")
        button1.setOnClickListener {
            myWebView.loadUrl("https://x86.co.kr")
        }
        button2.setOnClickListener {
            myWebView.reload()
        }
        button3.setOnClickListener {
            myWebView.stopLoading()
        }
        button4.setOnClickListener {
            myWebView.goBack()
        }
        button5.setOnClickListener {
            myWebView.goForward()
        }
    }
    override fun onBackPressed()
    {
        if (webview.canGoBack()) {
            webview.goBack()
        } else {
            super.onBackPressed()
        }
    }
}