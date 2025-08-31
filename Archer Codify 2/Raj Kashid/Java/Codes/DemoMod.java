package Codes;

public class DemoMod {
    public static void main(String[] args) {
        int x = -10, y = 5, z = -10;

        System.out.println(y + " % " + y + " --> " + (y % y));
        System.out.println(y + " % " + z + " --> " + (y % z));
        System.out.println(x + " % " + y + " --> " + (x % y));
        System.out.println(x + " % " + z + " --> " + (x % z));
    }
}
