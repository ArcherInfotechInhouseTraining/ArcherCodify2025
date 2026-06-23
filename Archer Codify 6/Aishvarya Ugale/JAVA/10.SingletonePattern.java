class Singleton {
    // Static variable to hold the single instance

    private static Singleton instance;//This is the static variable that will store the single instance of the Singleton class. Since it’s static, it belongs to the class, not any object.
    private static String msg; //A static string variable to hold a message. This is shared across all references to the Singleton instance.

    
    private Singleton() {  //This constructor is private, meaning no other class can create a Singleton object directly using new Singleton().
        System.out.println("Singleton instance created."); //The message "Singleton instance created." is printed when the constructor is called, which happens only the first time the instance is created.
    }

    // Public method to provide access to the instance
    public static Singleton getInstance(String str) { //A public static method to get the Singleton instance.
        if (instance == null) {
			msg=str;
            instance = new Singleton();
        }
        return instance;
    }

    public void displayMessage() {
        System.out.println("Hello from Singleton! "+msg);
    }
}
class DemoSingleton
{		
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance("One");  // Creates the instance  Singletone class madhla getInstance la call kela one string parameter nela
        Singleton obj2 = Singleton.getInstance("Two");  // Returns the same instance

        obj1.displayMessage();  // Output: Hello from Singleton!One
        obj2.displayMessage();  // Output: Hello from Singleton!One
        System.out.println(obj1 == obj2);  // Output: true (same instance) // obj1 and obj2 he reference variable ekach  object la refer karat astil tr true yenar 
    }
}