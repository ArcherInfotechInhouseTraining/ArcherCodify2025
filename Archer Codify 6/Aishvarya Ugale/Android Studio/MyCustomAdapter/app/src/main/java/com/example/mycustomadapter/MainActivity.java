package com.example.mycustomadapter;

import android.os.Bundle;
import android.widget.ListView;
import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {
    ListView listView;
    ArrayList<CustomFruitAdapter> fruitArrayList;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main); // Make sure activity_main.xml exists

        listView = findViewById(R.id.listview1);
        fruitArrayList = new ArrayList<>();

        // Add sample fruits
        fruitArrayList.add(new CustomFruitAdapter(R.drawable.img_1, "Apple", "Fresh and healthy apple"));
        fruitArrayList.add(new CustomFruitAdapter(R.drawable.img_2, "Banana", "Rich in potassium and energy"));
        fruitArrayList.add(new CustomFruitAdapter(R.drawable.img_3, "Mango", "Sweet and juicy, the King of Fruits"));
        fruitArrayList.add(new CustomFruitAdapter(R.drawable.img_4, "Pineapple", "Tropical fruit with a tangy taste"));
        fruitArrayList.add(new CustomFruitAdapter(R.drawable.img_5, "Grapes", "Small, sweet, and full of antioxidants"));
        fruitArrayList.add(new CustomFruitAdapter(R.drawable.img_6, "Guava", "Rich in Vitamin C and great for immunity"));

        // Set adapter
        MyCustomfruit adapter = new MyCustomfruit(this, fruitArrayList);
        listView.setAdapter(adapter);
    }
}
