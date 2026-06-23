package Codes;

import java.util.Arrays;

public class ArrayOperations {
    public static void main(String[] args) {
        // Example array
        int[] arr = {5, 3, 8, 6, 2};
        int[] arr2 = {1, 4, 7};

        // Search
        int searchValue = 8;
        int index = search(arr, searchValue);
        System.out.println("Index of " + searchValue + ": " + index);

        // Sort
        int[] sortedArr = sort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(sortedArr));

        // Sort Range
        int[] partialSorted = sortRange(arr, 1, 4);
        System.out.println("Partial Sorted Array: " + Arrays.toString(partialSorted));

        // Insert
        int[] newArr = insert(arr, 2, 10);
        System.out.println("Array after insertion: " + Arrays.toString(newArr));

        // Delete
        int[] deletedArr = delete(arr, 3);
        System.out.println("Array after deletion: " + Arrays.toString(deletedArr));

        // Reverse
        int[] reversedArr = reverse(arr);
        System.out.println("Reversed Array: " + Arrays.toString(reversedArr));

        // Copy
        int[] copiedArr = copy(arr);
        System.out.println("Copied Array: " + Arrays.toString(copiedArr));

        // Copy Range
        int[] rangeCopy = copyRange(arr, 1, 4);
        System.out.println("Range Copy: " + Arrays.toString(rangeCopy));

        // Reverse Copy
        int[] reverseCopyArr = reverseCopy(arr);
        System.out.println("Reverse Copied Array: " + Arrays.toString(reverseCopyArr));

        // Merge
        int[] mergedArr = merge(arr, arr2);
        System.out.println("Merged Array: " + Arrays.toString(mergedArr));

        // Split
        int[][] splitArr = split(arr, 2);
        System.out.println("Split Arrays: " + Arrays.deepToString(splitArr));

        // Concatenate
        int[] concatenatedArr = concatenate(arr, arr2);
        System.out.println("Concatenated Array: " + Arrays.toString(concatenatedArr));

        // Compare
        boolean areEqual = compare(arr, arr2);
        System.out.println("Arrays are equal: " + areEqual);

        // Fill
        int[] filledArr = fill(arr, 9);
        System.out.println("Filled Array: " + Arrays.toString(filledArr));

        // Fill Range
        int[] rangeFilledArr = fillRange(arr, 1, 3, 7);
        System.out.println("Range Filled Array: " + Arrays.toString(rangeFilledArr));
    }

    // Search
    public static int search(int[] arr, int value) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == value) return i;
        }
        return -1; // Not found
    }

    // Sort
    public static int[] sort(int[] arr) {
        int[] copy = Arrays.copyOf(arr, arr.length);
        Arrays.sort(copy);
        return copy;
    }

    // Sort Range
    public static int[] sortRange(int[] arr, int start, int end) {
        int[] copy = Arrays.copyOf(arr, arr.length);
        Arrays.sort(copy, start, end);
        return copy;
    }

    // Insert
    public static int[] insert(int[] arr, int index, int value) {
        int[] newArr = new int[arr.length + 1];
        System.arraycopy(arr, 0, newArr, 0, index);
        newArr[index] = value;
        System.arraycopy(arr, index, newArr, index + 1, arr.length - index);
        return newArr;
    }

    // Delete
    public static int[] delete(int[] arr, int index) {
        int[] newArr = new int[arr.length - 1];
        System.arraycopy(arr, 0, newArr, 0, index);
        System.arraycopy(arr, index + 1, newArr, index, arr.length - index - 1);
        return newArr;
    }

    // Reverse
    public static int[] reverse(int[] arr) {
        int[] reversed = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            reversed[i] = arr[arr.length - 1 - i];
        }
        return reversed;
    }

    // Copy
    public static int[] copy(int[] arr) {
        return Arrays.copyOf(arr, arr.length);
    }

    // Copy Range
    public static int[] copyRange(int[] arr, int start, int end) {
        return Arrays.copyOfRange(arr, start, end);
    }

    // Reverse Copy
    public static int[] reverseCopy(int[] arr) {
        return reverse(arr);
    }

    // Merge
    public static int[] merge(int[] arr1, int[] arr2) {
        int[] merged = new int[arr1.length + arr2.length];
        System.arraycopy(arr1, 0, merged, 0, arr1.length);
        System.arraycopy(arr2, 0, merged, arr1.length, arr2.length);
        return merged;
    }

    // Split
    public static int[][] split(int[] arr, int index) {
        int[] firstHalf = Arrays.copyOfRange(arr, 0, index);
        int[] secondHalf = Arrays.copyOfRange(arr, index, arr.length);
        return new int[][]{firstHalf, secondHalf};
    }

    // Concatenate
    public static int[] concatenate(int[] arr1, int[] arr2) {
        return merge(arr1, arr2);
    }

    // Compare
    public static boolean compare(int[] arr1, int[] arr2) {
        return Arrays.equals(arr1, arr2);
    }

    // Fill
    public static int[] fill(int[] arr, int value) {
        int[] filled = new int[arr.length];
        Arrays.fill(filled, value);
        return filled;
    }

    // Fill Range
    public static int[] fillRange(int[] arr, int start, int end, int value) {
        int[] filled = Arrays.copyOf(arr, arr.length);
        Arrays.fill(filled, start, end, value);
        return filled;
    }
}
