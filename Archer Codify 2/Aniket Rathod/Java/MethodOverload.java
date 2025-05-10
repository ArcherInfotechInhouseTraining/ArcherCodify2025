public class MethodOverload 
{
    public void display(String message)
    {
        System.out.println(message);
    }

    public void display()
    {
        display("Default message");
    }

    public static void main(String[] args)
    {
        MethodOverload exp = new MethodOverload();
        exp.display();
        exp.display("Custom Message");
    }
}
