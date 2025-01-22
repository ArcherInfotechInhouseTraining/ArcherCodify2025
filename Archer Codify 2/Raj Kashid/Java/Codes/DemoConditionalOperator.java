package Codes;

import java.util.Scanner;

public class DemoConditionalOperator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0, y = 0, z = 0;
        System.out.println("Enter three numbers : ");
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();

        System.out.println("Max : " + ((x > y) ? (x > z ? x : z) : (y > z ? y : z)));
        sc.close();
    }
}
