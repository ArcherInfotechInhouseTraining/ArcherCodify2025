class Bird {
    String name;

    Bird(String name) {
        this.name = name;
    }
}

public class ShallowCopyExample {
    public static void main(String[] args) {
        Bird[] original = { new Bird("Sparrow"), new Bird("Eagle") };
        Bird[] copy = original.clone(); // Shallow copy

        // Modify the object in the copied array
        copy[0].name = "Parrot"; 

        // Output both arrays
        System.out.println("Original Array: " + original[0].name + ", " + original[1].name);  // Parrot, Eagle
        System.out.println("Copied Array: " + copy[0].name + ", " + copy[1].name);  // Parrot, Eagle
    }
}
