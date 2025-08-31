import java.util.*;

public class power{

public static void main(String args[]){

Scanner obj=new Scanner(System.in);

System.out.println("Enter the number");
int x=obj.nextInt();

System.out.println("Enter the power");
int y=obj.nextInt();
int res=1;
for(int i=0;i<y;i++){

 res=res*x;


}
System.out.println(x+"^"+y+"="+res);


}

}