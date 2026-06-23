package Codes;

public class DataInputCmdln {
    public static void main(String[] args) {
        String s1 = "null", s2 = "null";
        try {
            s1 = args[0];
            s2 = args[1];
        } catch (Exception exception) {
        }

        System.out.println("String s1 --> " + s1);
        System.out.println("String s2 --> " + s2);
    }
}
