/*// import statement   
import java.math.BigDecimal;  
  
public class ArithmeticException1  
{  
// main method  
public static void main(String[] argvs)  
{  
// creating two objects of BigDecimal  
BigDecimal a1 = new BigDecimal(11);  
BigDecimal a2 = new BigDecimal(17);  
  
// 11 / 17 = 0.6470588235294118...  
//a1 = a1.divide(a2);

 //in the abone line exception get....to avoid it we can give the limit to digits after decimal  

a1 = a1.divide(a2, 6, BigDecimal.ROUND_DOWN);  

System.out.println(a1.toString());  
}  
}*/


// import statement   
import java.math.BigDecimal;  
  
public class ArithmeticException1
{  
// main method  
public static void main(String[] argvs)  
{  
// creating two objects of BigDecimal  
BigDecimal a1 = new BigDecimal(11);  
BigDecimal a2 = new BigDecimal(17);  
  
// 11 / 17 = 0.6470588235294118...  
// rounding up to decimal places  
a1 = a1.divide(a2, 6, BigDecimal.ROUND_DOWN);  
System.out.println(a1.toString());  
}  
}