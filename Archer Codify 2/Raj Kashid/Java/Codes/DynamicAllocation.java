package Codes;

import java.util.Scanner;

public class DynamicAllocation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt;
        System.out.println("Enter Count Of Elements : ");
        cnt = sc.nextInt();
        int[] ar = new int[cnt];

        System.out.println("Enter " + cnt + " Array Elements : ");
        for (int i = 0; i < ar.length; i++) {
            ar[i] = sc.nextInt();
        }

        System.out.println("Array Elements : ");
        for (int j : ar) {
            System.out.print(j + " ");
        }
    }
}
