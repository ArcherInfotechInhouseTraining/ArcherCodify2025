abstract class Shape
{

   abstract public void area();

}
class Circle extends Shape
 {
    public void area()
{

  System.out.println("Circle area()");

}



}
class Rectangle extends Shape
 {
    public void area()
{

  System.out.println("Rectangle area()");

}



}
class Triangle extends Shape
 {
    public void area()
{

 System.out.println(" Triangle area()");
}



}
class AbstractDemo
{
   public static void main(String args[])
     {

       Shape s=null;
        s=new Rectangle();
        s.area();
        s=new Circle();
        s.area();
        s=new Triangle();
        s.area();




      }


}