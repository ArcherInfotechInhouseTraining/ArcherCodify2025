public class ArithmeticException  
{  
void divide(int a, int b)  
{  
// performing divison and storing th result  
int res = a / b;  
System.out.println("Division process has been done successfully.");  
System.out.println("Result came after division is: " + res);  
}  
  
// main method  
public static void main(String argvs[])  
{  
// creating an object of the class ArithmeticException  
ArithmeticException obj = new ArithmeticException();  
obj.divide(1, 0);  
}  
}  