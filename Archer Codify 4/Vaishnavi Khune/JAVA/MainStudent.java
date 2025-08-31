import java.util.Scanner;


class Person
{

   private String nm="";
   private int age;

   public void in()
  {

    Scanner sc=new Scanner(System.in);

    System.out.println("Enter the name of the person:");
    nm=sc.nextLine();

    System.out.println("Enter the age of the person:");
    age=sc.nextInt();
  }

  public void out()
  {
  System.out.println("Name: "+nm+"\t Age: "+age);
  }

}

class Student extends Person
{

  private int rno;
  private double per;

  public void input()
    {

       in();
       Scanner sc=new Scanner(System.in);

       System.out.println("Enter the roll no. of the student:");
       rno=sc.nextInt();

       System.out.println("Enter the percentage of the Student:");
       per=sc.nextDouble();

    }

    public void out()
    {
      //out();//recurssion
      super.out();
      System.out.println("\n Roll no:"+rno+"\t Percentage:"+per);

    }

}

/*class Sports extends Student
{
  private int points;
  Scanner sc=new Scanner(System.in);
  public void set()
  {
     input();
     System.out.println("Enter the grade points of students:");
     points=sc.nextInt();

  }

  public void show()
  {
      output();
      System.out.println("\n points:"+points);

  }

}
*/

class MainStudent
{

    public static void main(String []args)
   {
      Student s =new Student();
      s.input();
       s.out();

   /* Sports s=new Sports();
    s.set();
    s.show();
*/

}

}








