public class HandleArithmeticExcept
{

void divide(int a, int b)
{
int res;
try{
res=a/b;

System.out.println("Division Done Successfully !!!");
System.out.println("Division is :"+res);

}
catch(java.lang.ArithmeticException ex)  
{  
System.out.println("Should avoid dividing by 0 " + ex);  
}  

}

public static void main(String args[])
{

HandleArithmeticExcept obj=new HandleArithmeticExcept();

obj.divide(34,0);

}

}