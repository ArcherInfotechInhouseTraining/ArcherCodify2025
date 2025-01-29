import java.util.*;

class StudentInfo{

private int id;
private double per;

public void InputData(){

Scanner sc=new Scanner(System.in);

System.out.println("Enter Student ID");
id=sc.nextInt();

System.out.println("Enter Students percentage");
per=sc.nextDouble();


}

public void OutputData(){

System.out.println("Student Id:"+id+" Percentage:"+per);

}

}

public class Oops{

public static void main(String args[]){

StudentInfo s1=new StudentInfo();
StudentInfo s2=new StudentInfo();
StudentInfo s3=new StudentInfo();
StudentInfo s4=new StudentInfo();


s1.InputData();
s1.OutputData();
s2.InputData();
s2.OutputData();
s3.InputData();
s3.OutputData();
s4.InputData();
s4.OutputData();



}

}