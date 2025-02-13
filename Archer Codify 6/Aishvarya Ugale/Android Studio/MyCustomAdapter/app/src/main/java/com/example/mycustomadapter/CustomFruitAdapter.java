package com.example.mycustomadapter;

public class CustomFruitAdapter {
    private int fruitImages;
    private String title;
    private String fruitExplain;

    public CustomFruitAdapter(int fruitImages, String title, String fruitExplain) {
        this.fruitImages = fruitImages;
        this.title = title;
        this.fruitExplain = fruitExplain;
    }

    public int getFruitImages() {
        return fruitImages;
    }

    public String getTitle() {
        return title;
    }

    public String getFruitexplain() {
        return fruitExplain;
    }

    public void setFruitImages(int fruitImages) {
        this.fruitImages = fruitImages;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public void setFruitexplain(String fruitExplain) {
        this.fruitExplain = fruitExplain;
    }
}
