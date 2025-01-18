import java.util.Scanner;
class Operators
{
    int x=0;
    int y=0;
    int z=0;
    public void Assignment()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("\n Enter the Values of X and Y: ");
        x=sc.nextInt();
        y=sc.nextInt();

        System.out.println("The Value of X and Y is: "+x+" "+y);

        System.out.println("Addition of X+Y is: "+(x+y));

        x+=100;
        y+=100;

        System.out.println(x);
        System.out.println(y);
    }

    public void Unary()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("\n Enter The Values of X and Y: ");
        x=sc.nextInt();
        y=sc.nextInt();

        z=-x;
        x++;
        --y;
        System.out.println("\n X="+x+"\t Y="+y+"\t Z="+z);

        z=++x+y--;
        System.out.println("\n X="+x+"\t Y="+y+"\t Z="+z);

    }

    public void PostPre(){
        Scanner sc=new Scanner(System.in);
        System.out.println("\n Enter The Value of X and Y:");
        x=sc.nextInt();
        y=sc.nextInt();
        int resultx=x++;
        int resulty=++y;

        System.out.println("Value of X and Y is: "+x+" "+y);
        System.out.println(resultx);
        System.out.println(x);
        System.out.println(resulty);
        System.out.println(y);

    }
    public static void main(String[] args) {
        Operators o=new Operators();
        o.PostPre();

    }


}