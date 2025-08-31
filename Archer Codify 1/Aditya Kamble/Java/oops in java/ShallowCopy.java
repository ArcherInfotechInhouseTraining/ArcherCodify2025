import java.util.Arrays;

public class ShallowCopy {
    public static void main(String[] args) {
        int[] original = {1, 2, 3};
        int[] copy = original.clone();  // Shallow copy using clone()

        copy[0] = 99;  // Modify the copied array

        // Output both arrays
        System.out.println("Original Array: " + Arrays.toString(original)); // [1, 2, 3]
        System.out.println("Copied Array: " + Arrays.toString(copy)); // [99, 2, 3]

    }
}
