interface zoo{
void sound();
void mean()
{
System.out.println("hi");
}
}

class animal()
{
void sound()
{
int a,b,c;
c=a+b;
System.out.println("sum:",c);
}
}

class start extends animal()
{
void mean()
{
int m,n,o;
o=m-n;
System.out.println("div:",o);
}
}

class Minterfacea()
{
public static void main(String []args)
{
             start sc=new start();
                  sc.mean();
   }
