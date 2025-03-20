class Example{
static int  x=1;
static double y=6.8;
static Boolean z=true;
static{

System.out.println(" value of x:" +x);
System.out.println(" value of y="+y);
System.out.println(" value of y="+z);
}
static{

x=33;
y=9.0;
z=false;
System.out.println(" value of x:" +x);
System.out.println(" value of y="+y);
System.out.println(" value of y="+z);
}
static{
y=x*x/3.0;
x=x+10;
z=true;
System.out.println(" value of x:" +x);
System.out.println(" value of y="+y);
System.out.println(" value of y="+z);
}
}

class DemoStaticMultipleInitializer{
public static void main(String []args)
{
System.out.println("\n value of x:" +Example.x);
System.out.println("\n value of y="+Example.y);
System.out.println("\n value of y="+Example.z);
}
}

