import java.util.*;

public class disp{

public static void main(String args[]){
/*
int i=1;
do{
System.out.println(i);
i++;
}while(i<=5);
*/

Scanner obj= new Scanner(System.in);

System.out.println("Enter a number for table:");
int n=obj.nextInt();
int i=1;
do{

System.out.println(n+"*"+i+"="+n*i);
i++;
}while(i<=10);

}
}