package Codes;

import java.util.Scanner;

public class ArrayIOSI {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] ar = new int[5];
        System.out.println("Enter 5 Array Elements : ");
        for (int i = 0; i < ar.length; i++) {
            ar[i] = sc.nextInt();
        }
        System.out.println("Array Elements : ");
        for (int j : ar) {
            System.out.print(j + " ");
        }
    }
}
