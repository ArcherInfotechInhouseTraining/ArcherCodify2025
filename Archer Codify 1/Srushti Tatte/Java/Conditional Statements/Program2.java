import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Program2 {
    public static void main(String[] args) {
        InputStreamReader isr=new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);

        int a=0;

        try{
            System.out.println("Enter any Integer");
            a=Integer.parseInt(br.readLine());
        }
        catch(Exception e){}

        if(a%7==0)
        {
            System.out.println(" "+a+ " is divisible by 7");
        }
        else{
            System.out.println(" "+a+" is not divisible by 7");
        }
    }
}
