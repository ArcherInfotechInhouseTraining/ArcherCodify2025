//abstract class and methods
import java.util.Scanner;
abstract class Shape
{
  abstract public void area();
abstract public void in();

}
class Circle extends Shape
{
 private int radius;
 private double area1;
  public void in()
{
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter the radius:");
  radius=sc.nextInt();
  area1=3.14*radius*radius;
  


}
public void area()
{
   System.out.println("Area of circle is:"+area1);
}
}
class Rectangle extends Shape
{
 private int length;
  private int breadth;
  private int area2;
public void in()
{
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter the length");
  length=sc.nextInt();
  System.out.println("Enter the breadth");
  breadth=sc.nextInt();
  
  area2=length*breadth;


}
  public void area()
{
 
  System.out.println("Area of Rectangle is:"+area2);


}
}
class Triangle extends Shape
{
  private int base;
  private int height;
  private double area3;

  public void in()
{
  
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter the base");
  base=sc.nextInt();
  System.out.println("Enter the height");
  height=sc.nextInt();
  area3=1.5*base*height;


}
  public void area()
{
  
  System.out.println("Area of Triangle is:"+area3);


}
}
class AbstractProg
{
  public static void main(String args[])
  {
     Shape s=null;
     Scanner sc=new Scanner(System.in);
    System.out.println("Menu Driven:");
    int choice=0;
    System.out.println("1.Circle \n2.Rectangle \n3.Triangle");
    System.out.println("Enter your Choice:");
    choice=sc.nextInt();
    switch(choice)
    {
      case 1:
         s=new Circle();
         s.in();
         s.area();
         break;
      case 2:
        s=new Rectangle();
        s.in();
        s.area();
        break;
      case 3:
       s=new Triangle();
       s.in();
       s.area();
      default:
        System.out.println("Wrong choice!!!");
   }

}

}



output:


C:\Users\Sairaj\OneDrive\Desktop\Java>javac AbstractProg.java

C:\Users\Sairaj\OneDrive\Desktop\Java>java AbstractProg
Menu Driven:
1.Circle
2.Rectangle
3.Triangle
Enter your Choice:
3
Enter the base
5
Enter the height
6
Area of Triangle is:45.0
Wrong choice!!!

C:\Users\Sairaj\OneDrive\Desktop\Java>java AbstractProg
Menu Driven:
1.Circle
2.Rectangle
3.Triangle
Enter your Choice:
2
Enter the length
5
Enter the breadth
6
Area of Rectangle is:30

C:\Users\Sairaj\OneDrive\Desktop\Java>java AbstractProg
Menu Driven:
1.Circle
2.Rectangle
3.Triangle
Enter your Choice:
1
Enter the radius:
6
Area of circle is:113.03999999999999