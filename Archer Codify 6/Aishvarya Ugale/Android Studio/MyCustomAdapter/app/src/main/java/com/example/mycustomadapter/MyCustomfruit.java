package com.example.mycustomadapter;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import java.util.ArrayList;

public class MyCustomfruit extends ArrayAdapter<CustomFruitAdapter> {
    private final Context context;
    private final ArrayList<CustomFruitAdapter> fruitArrayList;

    public MyCustomfruit(@NonNull Context context, ArrayList<CustomFruitAdapter> fruitArrayList) {
        super(context, R.layout.fruitlistemplate, fruitArrayList);
        this.context = context;
        this.fruitArrayList = fruitArrayList;
    }

    private static class MyViewHolder {
        TextView fruitName;
        TextView fruitInfo;
        ImageView fruitImage;
    }

    @NonNull
    @Override
    public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent) {
        MyViewHolder myViewHolder;
        CustomFruitAdapter customFruitAdapter = getItem(position);

        if (convertView == null) {
            myViewHolder = new MyViewHolder();
            LayoutInflater inflater = LayoutInflater.from(context);
            convertView = inflater.inflate(R.layout.fruitlistemplate, parent, false);

            myViewHolder.fruitName = convertView.findViewById(R.id.title);
            myViewHolder.fruitInfo = convertView.findViewById(R.id.Appleinfo);
            myViewHolder.fruitImage = convertView.findViewById(R.id.fruitimg);

            convertView.setTag(myViewHolder);
        } else {
            myViewHolder = (MyViewHolder) convertView.getTag();
        }

        if (customFruitAdapter != null) {
            myViewHolder.fruitName.setText(customFruitAdapter.getTitle());
            myViewHolder.fruitInfo.setText(customFruitAdapter.getFruitexplain());
            myViewHolder.fruitImage.setImageResource(customFruitAdapter.getFruitImages());
        }

        return convertView;
    }
}
