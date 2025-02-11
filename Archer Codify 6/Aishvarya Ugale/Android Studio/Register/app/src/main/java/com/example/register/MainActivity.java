package com.example.register;

import android.annotation.SuppressLint;
import android.app.DatePickerDialog;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Calendar;

public class MainActivity extends AppCompatActivity {

    // UI components
    Button loginBtn;
    EditText user_name, pass, address;
    TextView register, course, Gender, Birth, BirthChoose, Address, City,uploadImage;
    CheckBox C, CPP, Java, HTML, CSS, Android;
    RadioButton Male, Female;
    RadioGroup selectgender;
    Spinner select_city;

    private static final int SELECT_PHOTO_REQUEST_CODE=1;


    private Uri selectedPhotoUri;
    private Bitmap selectedPhotoBitmap;
    Switch toggleSwitch;

    Button registerBtn;
    TextView toUploadImage;

    ImageView toShowImage;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);





        // Initialize UI components
        loginBtn = findViewById(R.id.btn);
        user_name = findViewById(R.id.user_name);
        pass = findViewById(R.id.pass);
        address = findViewById(R.id.Enter_add);
        register = findViewById(R.id.register);
        course = findViewById(R.id.course);
        Gender = findViewById(R.id.Gender);
        Birth = findViewById(R.id.Birth);
        BirthChoose = findViewById(R.id.Birth_choose);
        Address = findViewById(R.id.Address);
        City = findViewById(R.id.City);
        select_city = findViewById(R.id.Select_city);
        C = findViewById(R.id.C);
        CPP = findViewById(R.id.CPP);
        Java = findViewById(R.id.Java);
        HTML = findViewById(R.id.HTML);
        CSS = findViewById(R.id.CSS);
        Android = findViewById(R.id.Android);
        Male = findViewById(R.id.Male);
        Female = findViewById(R.id.Female);
        selectgender = findViewById(R.id.selectgender);
        uploadImage = findViewById(R.id.photo);
        toggleSwitch = findViewById(R.id.s);


        setUpSpinner(); // Call method to set up spinner

        loginBtn.setOnClickListener(view -> handlLogin());
        BirthChoose.setOnClickListener(view -> showDatePickerDialog());

        user_name.setOnClickListener(view ->
                Toast.makeText(MainActivity.this, "Enter UserName", Toast.LENGTH_SHORT).show()
        );
        // Upload Photo
        uploadImage.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                uploadPhotograph();
            }
        });

        toggleSwitch.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                loginBtn.setEnabled(isChecked);
            }
        });

    }

    private void setUpSpinner() {
        String[] cities = {
                "Select City", "Pune", "Mumbai", "Delhi", "Jalgaon", "Lucknow", "Agra", "Ghaziabad"
        };

        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, cities);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        select_city.setAdapter(adapter);
    }

    private void showDatePickerDialog() {
        Calendar calendar = Calendar.getInstance();
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH);
        int day = calendar.get(Calendar.DAY_OF_MONTH);

        DatePickerDialog datePickerDialog = new DatePickerDialog(
                this, (view, selectedYear, selectedMonth, selectedDay) -> {
            BirthChoose.setText(selectedDay + "/" + (selectedMonth + 1) + "/" + selectedYear);
        }, year, month, day);

        datePickerDialog.show();
    }

    private void handlLogin() {
        String username = user_name.getText().toString().trim();
        String password = pass.getText().toString().trim();
        int selectedId = selectgender.getCheckedRadioButtonId();
        String selectDob = BirthChoose.getText().toString();
        String selectedCity = select_city.getSelectedItem().toString();

        // Collect selected options

        ArrayList<String> selectedCourses = new ArrayList<>();
        if (C.isChecked()) selectedCourses.add(C.getText().toString());
        if (CPP.isChecked()) selectedCourses.add(CPP.getText().toString());
        if (HTML.isChecked()) selectedCourses.add(HTML.getText().toString());
        if (CSS.isChecked()) selectedCourses.add(CSS.getText().toString());
        if (Java.isChecked()) selectedCourses.add(Java.getText().toString());
        if (Android.isChecked()) selectedCourses.add(Android.getText().toString());

        if (username.isEmpty() || password.isEmpty() || selectedCourses.isEmpty()) {
            Toast.makeText(MainActivity.this, "Please fill all the fields", Toast.LENGTH_SHORT).show();
            return;
        }

        if (selectedId == -1) { // No gender selected
            Toast.makeText(MainActivity.this, "Please select a gender", Toast.LENGTH_SHORT).show();
            return;
        }

        if (selectedCity.equals("Select City")) { // City is required
            Toast.makeText(MainActivity.this, "Please select a valid city", Toast.LENGTH_SHORT).show();
            return;
        }

        String selectedCoursesString = String.join(", ", selectedCourses);
        RadioButton selectedRadioButton = findViewById(selectedId);
        String selectedGender = selectedRadioButton.getText().toString();

        // Intent to move to Register_Data activity
        Intent intent = new Intent(MainActivity.this, Register_Data.class);
        intent.putExtra("USER_INPUT", username);
        intent.putExtra("PASS_INPUT", password);
        intent.putExtra("COURSES_INPUT", selectedCoursesString);
        intent.putExtra("GENDER_INPUT", selectedGender);
        intent.putExtra("CITY_INPUT", selectedCity);
        intent.putExtra("Selected_date", selectDob);
        if (selectedPhotoUri != null) {
            intent.putExtra("PHOTO_URI", selectedPhotoUri.toString());
        } else {
            intent.putExtra("PHOTO_URI", "No photo selected");
            Toast.makeText(this, "No photo selected", Toast.LENGTH_SHORT).show();
        }

        startActivity(intent);
    }

    private void uploadPhotograph() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        startActivityForResult(intent, SELECT_PHOTO_REQUEST_CODE);
    }



    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == SELECT_PHOTO_REQUEST_CODE && resultCode == RESULT_OK && data != null) {
            selectedPhotoUri = data.getData();
            try {
                // Load the selected photo into a Bitmap
                selectedPhotoBitmap = MediaStore.Images.Media.getBitmap(this.getContentResolver(), selectedPhotoUri);

                // Display the photo in the ImageView
                ImageView selectedPhotoView = findViewById(R.id.selectedPhotoView);
                selectedPhotoView.setImageBitmap(selectedPhotoBitmap);
            } catch (IOException e) {

                Toast.makeText(this, "Failed to load the photo", Toast.LENGTH_SHORT).show();
            }
        }
    }

    // Lifecycle logs
    @Override
    protected void onStart() {
        super.onStart();
        Log.v("Lifecycle Verbose", "onStart called");
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.i("Lifecycle Info", "onResume called");
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.d("Lifecycle", "onPause called");
    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.d("Lifecycle", "onStop called");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d("Lifecycle", "onDestroy called");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.d("Lifecycle", "onRestart called");
    }
}
