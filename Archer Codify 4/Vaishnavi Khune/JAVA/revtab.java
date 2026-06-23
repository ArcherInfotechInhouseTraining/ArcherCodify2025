import java.util.*;

public class revtab{

public static void main(String args[]){

Scanner obj=new Scanner(System.in);
System.out.println("Enter the table number:");
int n=obj.nextInt();

for(int i=10;i>=1;i--){

int m=n*i;
System.out.println(m);
}

}

}