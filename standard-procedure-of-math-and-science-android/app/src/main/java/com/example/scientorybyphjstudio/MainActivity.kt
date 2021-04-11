package com.example.scientorybyphjstudio

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        button.setOnClickListener {
            val intent = Intent(this, thelasttheoryofferma::class.java)
            startActivity(intent)
        }
        button2.setOnClickListener {
            val intent = Intent(this, wonderfulscience::class.java)
            startActivity(intent)
        }
        button3.setOnClickListener {
            val intent = Intent(this, whenthemathisrequired::class.java)
            startActivity(intent)
        }
        button4.setOnClickListener {
            val intent = Intent(this, gunsgermssteel::class.java)
            startActivity(intent)
        }
        button5.setOnClickListener {
            val intent = Intent(this, cosmos::class.java)
            startActivity(intent)
        }
    }
}