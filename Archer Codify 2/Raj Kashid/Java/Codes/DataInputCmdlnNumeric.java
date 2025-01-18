package Codes;

public class DataInputCmdlnNumeric {
    public static void main(String[] args) {
        int x = Integer.parseInt(args[0]);
        short s = Short.parseShort(args[1]);
        System.out.println("int x --> " + x);
        System.out.println("short s --> " + s);
        System.out.println("Sum --> " + (x + s));
    }
}
