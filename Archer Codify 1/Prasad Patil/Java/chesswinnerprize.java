import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    
	    Scanner sc = new Scanner (System.in);
		
		int  t= sc.nextInt();
		sc.nextLine();
		
		while (t-- >0)
		{
           if (!sc.hasNextInt() )
           {
               break;
           }
           
           
            int x = sc.nextInt();
            sc.nextLine(); 
		    
		    
		    if(!sc.hasNextLine() )
		    {
		        break;
		    }
		    
		    String result=sc.nextLine();
		    
		    if(result.length()  != 14)
		    {
		        break;
		    }
		    
		    
		    
		    
		    int carl=0;
		    int chef=0;
		    
		    
		    
		    
		    for (int i=0 ; i<14; i++)
		    {
		        char a= result.charAt(i);
		        
		        
		        if( a=='C')
		        {
		            carl=carl+2;
		        }
		        else if (a=='N')
		        {
		            chef= chef+2;
		        }
		        else if(a=='D')
		        {
		            carl++;
		            chef++;
		        }
		    }
		    
		    int carl_money=0;
		    
		    
		    if( carl > chef)
		    {
		        carl_money= 60 * x;
		        
		    }
		    else if (chef > carl)
		    {
		        
		        carl_money= 40*x;
		    }
		    else if( carl ==chef)
		    {
		        carl_money = 55* x;
		        
		    }
		    
		    
		    
		    System.out.println(carl_money);
		    
		    
		    
		    
		    
		    
		}

	}
}
