package Codes;

import java.io.InputStreamReader;
import java.io.BufferedReader;

public class CharIOUsingBI {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        char ch = ' ';
        System.out.println("Enter character : ");
        ch = br.readLine().charAt(0);
        System.out.println("character --> " + ch);
    }
}
