/*
class Counter {
    static int count = 0; // Static variable

    Counter() {
        count++; // Increment the static variable
        System.out.println("Count: " + count);
    }
}

public class UsingStatic{
    public static void main(String[] args) {

        for(int i=0 ; i<3; i++)
        {
            Counter c1 = new Counter(); // obj is Created to Call the Constructor
        }
       
        // Accessing static variable using class name
        System.out.println("Final Count: " + Counter.count); // Final Count: 3
    }
}

*/
class Counter {
    static int count = 0;

    public static void increment() {
        count++;
        System.out.println("Count: " + count);
    }
}

public class UsingStatic {
    public static void main(String[] args) {
        Counter.increment(); // Count: 1 without Creating an Object
        Counter.increment(); // Count: 2
    }
}

