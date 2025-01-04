package Codes;

import java.util.Scanner;

public class DemoCasting {
    public static void main(String[] args) {
        int x = 0;
        int y = 0;
        double d = 0.0;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter x(int) -->");
        x = sc.nextInt();
        System.out.print("Enter y(float) -->");
        y = sc.nextInt();

        d = x / y;
        System.out.println("d = x/y --> " + d);
        d = (float) x / y;
        System.out.println("d = (float)x/y --> " + Math.round(d));
        d = x / (float) y;
        System.out.println("d = x/(float)y --> " + Math.round(d));
        d = (float) x / (float) y;
        System.out.println("d = (float) x / (float) y --> " + Math.round(d));
        sc.close();
    }
}
