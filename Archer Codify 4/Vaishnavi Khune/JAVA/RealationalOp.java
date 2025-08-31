class RealationalOp
{
public static void main(String []args)
{
int x=10, y=12;
int z=78;
System.out.println("x="+x+"\t y="+y);

boolean b;

//Relational operators

b=x>y;
System.out.println("x>y is :"+b);

b=x<y;
System.out.println("x<y is :"+b);

b= x==y;
System.out.println("x==y is :"+b);

//logical operators

b= (x<y)&&(x<50);
System.out.println("(x<y)&&(x<50) is :"+b);

b= (x<y)||(x<50);
System.out.println("(x<y)||(x<50) is :"+b);

b= (x<y)||(x>50);
System.out.println("(x<y)||(x<50) is :"+b);

//CONDITIONAL operator

int t = (x>y) ? ((x>z)?x:z) : ((y>z)?y:z) ;
System.out.println("max no is :"+t);

//bitwise operators

int s=x&y;
System.out.println("x&y is :"+s);

 s=x|y;
System.out.println("x|y is :"+s);

 s=x^y;
System.out.println("x^y is :"+s);

System.out.println("x<<2 is :"+ (x<<2));
System.out.println("y>>2 is :"+ (y>>2));


}
}