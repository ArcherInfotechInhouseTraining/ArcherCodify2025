package Codes;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class ArrayIOBI {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader((new InputStreamReader(System.in)));

        int[] ar = new int[5];

        System.out.print("Enter 5 Numbers : ");
        for (int i = 0; i < ar.length; i++) {
            ar[i] = Integer.parseInt(br.readLine());
        }

        System.out.println("Array Elements : ");
        for (int i : ar) {
            System.out.print(i + " ");
        }

    }
}
