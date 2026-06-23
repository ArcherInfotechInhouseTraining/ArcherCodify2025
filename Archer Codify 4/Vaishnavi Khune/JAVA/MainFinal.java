class DemoFinal
{

    final public int x;
    public DemoFinal()
    {

        x=10;

    }

    public void Show()
    {
           System.out.println("x= "+x);
    }

}

class MainFinal
{
    public static void main(String []args)
    {
           DemoFinal obj=new DemoFinal();
           // obj.x=100; //MainFinal.java:24: error: cannot assign a value to final variable x obj.x=100;
              
           obj.Show();
    }
}