class Utility
{
    private Utility()
    {
        throw new UnsupportedOperationException("Cannot instantiate Utility.");
    }

    public static int add(int a, int b)
    {
        return a + b;
    }
}

public class UtilityClass 
{
    public static void main(String[] args)
    {
        int result = Utility.add(5, 10);
        System.out.println("Result: "+result);
    }    
}
