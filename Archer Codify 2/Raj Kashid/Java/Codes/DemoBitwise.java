package Codes;

import java.util.Scanner;

public class DemoBitwise {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0, y = 0;
        System.out.println("Enter two numbers : ");
        x = sc.nextInt();
        y = sc.nextInt();

        System.out.println("x & y --> " + (x & y));
        System.out.println("x | y --> " + (x | y));
        System.out.println("x ^ y --> " + (x ^ y));
        System.out.println("x >> y --> " + (x >> y));
        System.out.println("x >> y --> " + (x >> y));

        sc.close();
    }
}
