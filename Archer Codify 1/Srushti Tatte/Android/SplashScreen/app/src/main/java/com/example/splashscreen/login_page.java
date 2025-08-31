package com.example.splashscreen;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class login_page extends AppCompatActivity {

        Button loginBtn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_login_page);

        loginBtn = findViewById(R.id.btn);
        loginBtn.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View v)

            {
                Toast.makeText(login_page.this, "Login Successful", Toast.LENGTH_LONG).show();
                Intent intent=new Intent(login_page.this, activity_second.class);
                startActivity(intent);
                finish();

            }
        });


    }
    @Override
    protected void onStart()
    {
        super.onStart();
        Log.d("Lifecycle","onStart Called");
    }
    @Override
    protected void onResume()
    {
        super.onResume();
        Log.d("Lifecyle","onResume Called");
    }
    @Override
    protected void onPause()
    {
        super.onPause();
        Log.d("Lifecyle","onPause Called");
    }
    @Override
    protected void onStop()
    {
        super.onStop();
        Log.d("Lifecyle","onStop Called");
    }
    @Override
    protected void onDestroy()
    {
        super.onDestroy();
        Log.d("Lifecyle","onDestroy Called");
    }
    @Override
    protected void onRestart()
    {
        super.onRestart();
        Log.d("Lifecyle","onRestart Called");
    }
}