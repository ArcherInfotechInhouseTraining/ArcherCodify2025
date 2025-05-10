class DemoSingleton
{
    private static Singleton instance;
    private static String msg;

    private DemoSingleton()
    {
        System.out.println("Singleton instance created.");
    }

    public static Singleton getInstance(String str)
    {
        if (instance == null)
        {
            msg=str;
            instance = new Singleton();
        }
        return instance;
    }

    public void displayMessage()
    {
        System.out.println("Hello from Singleton !"+msg);
    }
}


public class Singleton 
{
    public static void main(String[] args) 
    {
        Singleton obj1 = Singleton.getInstance("One");
        Singleton obj2 = Singleton.getInstance("Two");
    
        obj1.displayMessage();
        obj2.displayMessage();
        System.out.println(obj1 == obj2);
    }
}