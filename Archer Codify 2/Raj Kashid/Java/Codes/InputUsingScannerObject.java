package Codes;

import java.util.Scanner;

public class InputUsingScannerObject {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str;
        int x;
        float f;
        boolean b;

        System.out.println("Enter string : ");
        str = sc.nextLine();

        System.out.println("Enter integer : ");
        x = sc.nextInt();

        System.out.println("Enter float : ");
        f = sc.nextFloat();

        System.out.println("Enter boolean : ");
        b = sc.nextBoolean();

        System.out.println("String str --> " + str);
        System.out.println("integer x --> " + x);
        System.out.println("float f --> " + f);
        System.out.println("boolean b --> " + b);

        sc.close();
    }
}
