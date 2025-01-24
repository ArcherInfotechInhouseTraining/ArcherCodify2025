package Codes;

import javax.swing.*;

public class ArrayIOSIDialog {
    public static void main(String[] args) {
        String data = JOptionPane.showInputDialog("Enter Array Elements By Space Separated");
        System.out.println("Entered String : " + data);

        String[] nums = data.split(" ");
        int[] ar = new int[nums.length];

        for (int i = 0; i < ar.length; i++) {
            ar[i] = Integer.parseInt(nums[i]);
        }

        System.out.println("Array Elements : ");
        for (int j : ar) {
            System.out.print(j + " ");
        }


    }
}
