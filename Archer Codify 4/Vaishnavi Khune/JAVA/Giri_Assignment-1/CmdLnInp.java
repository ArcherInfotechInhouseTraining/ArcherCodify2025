//Write a JAVA program to perform input/output of all basic data types using command line argument.

class CmdLnInp
{

   public static void main(String args[])
   { 
    int i=Integer.parseInt(args[0]);

    double d=Double.parseDouble(args[1]);

   float f=Float.parseFloat(args[2]);
  //char c=Character.parseChar(args[3]);
String s=args[3];

   System.out.println("Int value is:"+i); 
System.out.println("Double value is:"+d); 
System.out.println("Float value is:"+f);   
//System.out.println("char value is:"+c); 
System.out.println("String value is:"+s); 
 }

}