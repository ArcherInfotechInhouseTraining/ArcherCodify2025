class Demo{

    int x=10;
    int y=20;

    public void add()
    {
        System.out.println("\n Addition of Number is: "+(x+y));
    }

    public void sub()
    {
        System.out.println("\n Subtraction of Number is: "+(x-y));
    }
    public void mul()
    {
        System.out.println("\n Multiplication of Number: "+(x*y));
    }
}

class Main{
    public static void main(String[] args) {
        Demo ob=new Demo();
        ob.add();
        ob.sub();
        ob.mul();
    }
}
