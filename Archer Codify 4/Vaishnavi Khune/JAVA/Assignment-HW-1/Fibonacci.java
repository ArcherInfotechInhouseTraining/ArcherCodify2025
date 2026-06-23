// 9. Write a program to print the Fibonacci series given ahead. 0 1 1 2 3 5 8 13 21 34

class Fibonacci
{

public static void main(String args[])
{

int a=0;
int b=1;
int i;
int c;

System.out.print("Fibonacci series: ");

System.out.print(a+"\t"+b);

for(i=0;i<8;i++)
{
c=a+b;
a=b;
b=c;
System.out.print("\t"+c);
}

}
}