import java.util.*;

public class digit{

public static void main(String args[]){

Scanner obj=new Scanner(System.in);

//System.out.println("Enter a number:");
//int n=obj.nextInt();
for (int n=100;n<=1000;n++){
int q=n;
int count=0;
int y=1;
int x;
do{
 
 x =q%10;

q=q/10;
if(x!=0){
count++;
}
}while(q>0 || x>0);
//System.out.println("The number is "+count+" digit");
}
q=n;

int sum=0;
do{
y=1;
int p=q%10;
q=q/10;
for(int i=0;i<count;i++){

y=y*p;

} 
sum=sum+y;

}while(q>0 || p>0);

/*while(q!=0){
y=1;
int r=q%10;//3
 //System.out.println("count:"+count);  
for(int i=0;i<count;i++){
  y=y*r; 
}
//sum=sum+(r*r*r);
sum=sum+y;
q=q/10;
}
*/
if(n==sum){

System.out.println(n+"is an armstrong number"); 

}
}
//else{
//System.out.println(n+"is not an armstrong number"); 
//}
}
}
