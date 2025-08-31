import java.util.*;

public class avg{

public static void main(String args[]){

Scanner obj=new Scanner(System.in);

/*float sum=0;
System.out.println("Enter 10 integers");
for(int i=0;i<10;i++){
int num=obj.nextInt();
sum=sum+num;
}
System.out.println("Sum is  :"+sum);
float avg=sum/10;
System.out.println("Average :"+avg);

*/
/*System.out.println("Enter a number :");
int f=obj.nextInt();

int fact=1;

for(int i=1;i<=f;i++){

fact=fact*i;

}
System.out.println("Factorial=="+fact);*/

int n1=0;
int n2=1;
int sum=0;
System.out.println("Enter the number");
int num=obj.nextInt();
System.out.println(n1);
System.out.println(n2);
for( int i=1;i<=(num-2);i++)
{
sum=n1+n2;
System.out.println(sum);
n1=n2;
n2=sum;
}


}



}

