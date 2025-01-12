package Codes;

public class DemoBreak {
    public static void main(String[] args) {
        int i, j;
        for (i = 1; i <= 10; i++) {
            System.out.print(i + " --> ");
            for (j = 1; j <= 10; j++) {
                if (j > i) {
                    break;
                }
                System.out.print(" " + j);
            }
            System.out.println();
        }

    }
}
