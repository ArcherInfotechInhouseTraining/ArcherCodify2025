class Base
{
    private int a;
    
    public Base()   // default Constructor
    {
          System.out.println("In Base class - Default Constructor");
          a=10;
    }

    public Base(int x)   // para Constructor
    {
          System.out.println("In Base class - para Constructor");
          a=x;
    }

    public void showBase()
    {
        System.out.println("a="+a);
    }

}

class ImdBase extends Base
{
    private int b;
    
    public ImdBase()   // default Constructor
    {
          System.out.println("In ImdBase class - Default Constructor");
          b=20;
    }

    public ImdBase(int x, int y)   // para Constructor
    {
          System.out.println("In ImdBase class - para Constructor");
          b=y;
    }

    public void showImdBase()
    {
        System.out.println("b="+b);
    }

}

class Derived extends ImdBase
{
    private int c;
    
    public Derived()   // default Constructor
    {
          System.out.println("In Derived class - Default Constructor");
          c=30;
    }

    public Derived(int x, int y, int z)   // para Constructor
    {
          System.out.println("In Derived class - para Constructor");
          c=z;
    }

    public void showDerived()
    {
        System.out.println("c="+c);
    }

}

class MainConstInhe
{
     public static void main(String []args)
      {
               Derived obj=new Derived();
               obj.showDerived();
                   
               Derived obj2=new Derived(100,200,300);
               obj2.showDerived();
      
      
      }
  
}

