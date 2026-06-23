interface shape{
void area();//abstract
}

class Rect implements shape
{
public void area()
{
System.out.println("in rect area() ");
}
}

class Triangle implements shape{
public void area()
{
System.out.println("\n in trainagle area()");
}
}

class circle implements shape{
public void area(){
System.out.println("\n in circle area()");
}
}

class DemoRunTime
{
public static void main(String []args)
{
shape ref;
ref=new Rect();
}
}
