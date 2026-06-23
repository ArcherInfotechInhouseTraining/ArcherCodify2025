package Codes;

public class InitArray {
    public static void main(String[] args) {
        int[] ar = {1, 2, 3, 4, 5};

        System.out.println("\nArray Elements Are : ");
        for (int i = 0; i < 5; i++) {
            System.out.print(ar[i] + " ");
        }

        System.out.println("\nArray Elements Are : ");
        for (int i = 0; i < ar.length; i++) {
            System.out.print(ar[i] + " ");
        }

        System.out.println("\nArray Elements Are : ");
        for (int j : ar) {
            System.out.print(j + " ");
        }
    }
}
