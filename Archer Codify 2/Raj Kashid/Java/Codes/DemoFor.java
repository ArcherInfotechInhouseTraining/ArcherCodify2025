package Codes;

import javax.swing.JOptionPane;

public class DemoFor {
    public static void main(String[] args) {
        int no = 0, tot = 0;
        no = Integer.parseInt(JOptionPane.showInputDialog("Enter value of x"));
        for (@SuppressWarnings("unused")
        int i = 0; no != 0; no /= 10) {
            tot += (no % 10);
        }
        System.out.println("Sum of digits : " + tot);
    }
}
