package Codes;

public class DemoLogical {
    public static void main(String[] args) {
        int x = 10, y = 5;

        System.out.println(x + " > " + y + " && " + y + " > " + x + " --> " + ((x > y) && (y > x)));
        System.out.println(x + " > " + y + " || " + y + " > " + x + " --> " + ((x > y) || (y > x)));
        System.out.println("!(" + x + " > " + y + ")" + " --> " + !(x > y));
    }
}
