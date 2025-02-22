public class VarargsExp
{
    public void display(String... messages)
    {
        if (messages.length == 0)
        {
            System.out.println("Default message");
        }
        else
        {
            for(String message: messages)
            {
                System.out.println(message);
            }
        }
    }

    public static void main(String[] args)
    {
        VarargsExp example = new VarargsExp();
        example.display();
        example.display("Custom message 1", "Custom message 2");
        example.display("One","Two","Three");
    }
}