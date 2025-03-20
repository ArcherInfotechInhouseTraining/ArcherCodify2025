interface Greeting {
    // Default method using a private instance method
    default void sayHello() {
        System.out.println("Default sayHello method:");
        log("Hello from default method");
		logStatic("Hi from default method");
    }

    // Static method using a private static method
    static void sayHi() {
        System.out.println("Static sayHi method:");
        logStatic("Hi from static method");
		// log("Hello from default method"); // error: non-static method log(String) cannot be referenced from a static context
    }

    // Private instance method
    private void log(String message) {
        System.out.println("Logging: " + message);
    }

    // Private static method
    private static void logStatic(String message) {
        System.out.println("Logging (static): " + message);
    }
}

public class PrivateStaticMethods {
    public static void main(String[] args) {
        Greeting obj = new Greeting() {}; // Anonymous implementation of Greeting

        // Call the default method
        obj.sayHello();

        // Call the static method
        Greeting.sayHi();
    }
}
