

class DemoStaticTryCatchInitializer{
public static void main(String []args)
{
System.out.println("\n value of x:" +Example.x);
System.out.println("\n value of y="+Example.y);
System.out.println("\n value of y="+Example.z);

}
}
class Example{
static int  x=1;
static double y=6.8;
static Boolean z=true;
static{
try{
z=23/t;
}
catch(Exception e)
{
System.out.println("\n unable to inti x,so init is default");


}

System.out.println(" value of x:" +x);
System.out.println(" value of y="+y);
System.out.println(" value of y="+z);
}
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

