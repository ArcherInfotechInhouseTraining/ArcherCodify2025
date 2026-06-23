package Codes;

public class DemoLabelledBreak {
    public static void main(String[] args) {
        int i, j;

        outer:
        for (i = 0; i < 10; i++) {
            System.out.print("-");
            for (j = 0; j < 10; j++) {
                if (i > 5) {
                    break outer;
                }
                if (j > i) {
                    break;
                }
                System.out.print("" + j);
            }
            System.out.println();
        }
    }
}
