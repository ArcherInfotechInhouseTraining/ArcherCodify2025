// 11. Write a program to perform search operations in an array.

import java.util.Scanner;

public class ArraySearch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input array size
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        // Input array elements
        int[] array = new int[size];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
        }

        // Input the element to search for
        System.out.print("Enter the element to search for: ");
        int target = scanner.nextInt();

        // Perform linear search
        int foundIndex = linearSearch(array, target);

        // Output the result
        if (foundIndex != -1) {
            System.out.println("Element " + target + " found at index " + foundIndex);
        } else {
            System.out.println("Element " + target + " not found in the array");
        }

        scanner.close();
    }

    public static int linearSearch(int[] array, int target) {
        for (int i = 0; i < array.length; i++) {
            if (array[i] == target) {
                return i; // Element found, return index
            }
        }
        return -1; // Element not found
    }
}

