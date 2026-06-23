import java.util.*;

public class sw2{

public static void main(String args[]){
 Scanner obj=new Scanner(System.in);
do{
System.out.println("Enter your Choice :\n 1: even and odd number \n 2: to find prime numbers \n 3: to print fibonacci series \n 4: to print factors of numbers \n 5: to find perfect numbers:\n 6:to exit");
 int ch=obj.nextInt();

switch(ch){

case 1:
System.out.println("Enter a number");
int n=obj.nextInt();

if(n%2==0){
System.out.println(n+"is a even number");
}else{
System.out.println(n+"is a odd number");
}
break;

case 2:
System.out.println("Enter a number");
int p=obj.nextInt();
int count=0;
for(int i=2;i<p;i++){
 
int a=p%i;
if(a==0){
count++;
}

} if(count==0){
System.out.println(p+"is a prime number");
}else{
System.out.println(p+"is a not prime number");
}
break;

case 3:
System.out.println("How many number want to display in fabonacci series");
int q=obj.nextInt();

int a=0;
int b=1;
System.out.print("Fabonacci series:"+a+"\t "+b);
for(int i=1;i<=(q-2);i++){
int temp=a+b;
System.out.print("\t "+temp);
a=b;
b=temp;
}
System.out.println();
break;

case 4:
System.out.println("Enter a number");
int r=obj.nextInt();
System.out.println("Factors of"+r+"are");
for(int i=1;i<=(r/2);i++){
 int x=r%i;
if(x==0){
System.out.print("\t"+i);
}
}
break;
 
case 5:
System.out.println("Enter a number");
int s=obj.nextInt();
int sum=0;
for(int i=1;i<=(s/2);i++){
 int x=s%i;
if(x==0){
sum=sum+i;
}
}
if(sum==s){
System.out.println(s+"is a perfect number");
}
break;

case 6:
System.exit(0);

default:
System.out.println("Invalid choice");

}
 }while(true);
}
}