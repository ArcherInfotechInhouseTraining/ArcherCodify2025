package Codes;

import javax.swing.JOptionPane;

public class InputUsingShowIpDialog {
    public static void main(String[] args) {
        int x;
        float f;

        x = Integer.parseInt(JOptionPane.showInputDialog("Enter integer"));
        f = Float.parseFloat(JOptionPane.showInputDialog("Enter float"));

        System.out.println("integer : " + x);
        System.out.println("float : " + f);
    }
}
