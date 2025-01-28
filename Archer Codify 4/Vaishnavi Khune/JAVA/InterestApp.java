import java.util.Scanner;

class Interest
{

 int p;
 double r;
 int d;
void setPRD(int pamt,double irate,int dur){

p=pamt;
r=irate;
d=dur;

}



}

class CalculateInterest extends Interest
{
public double i;
double calinterest()
{
  i=(p*r*d)/100;
return i;
}

}

class InterestApp
{

public static void main(String args[])
{
Scanner sc=new Scanner(System.in);

System.out.println("Enter principle amount ,rate of interst,number of years");
int pamount=sc.nextInt();
double rate=sc.nextDouble();
int years=sc.nextInt();

CalculateInterest c1=new CalculateInterest();

c1.setPRD(pamount,rate,years);
c1.calinterest();

System.out.println("Amount of Interest is :"+c1.calinterest());





}

}
