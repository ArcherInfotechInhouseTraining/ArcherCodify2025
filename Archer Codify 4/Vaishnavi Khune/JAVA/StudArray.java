import java.util.Scanner;
class StudentInfo
{
	private int id;
	private double per;

          public int getId()
          {
             return id;
          }
           public void setId(int id)
           {
                 this.id=id;
             }
        public void setPer(double per)
        {
          this.per = per;

         }
	
	public void outputAllData()
	{
		System.out.println("\n ID: "+id+"\t Percentage:"+per);
	}
	public double getper()
	{
		return per;
	}	
}

public class StudArray{
public static void main(String []args)
	{
		StudentInfo ar[]=new StudentInfo[3];
                Scanner sc = new Scanner(System.in);
		System.out.println("\n enter the information of 3 students ");
		for( int i=0; i<ar.length;i++)
		{
			ar[i] = new StudentInfo();
                System.out.println("Enter the id");
                      int id= sc.nextInt();
                        ar[i].setId(id);
			System.out.println("Enter the Percentage");
                       double per = sc.nextDouble();
                         ar[i].setPer(per);
		}

		System.out.println("\n Information of 3 students ");
		for( int i=0; i<ar.length;i++)
		{
			ar[i].outputAllData();
		}
		int pos=0;
		for( int i=1; i<ar.length;i++)
		{
			if(ar[i].getper()>ar[pos].getper() )
			{
				pos=i;
			}
		}

		System.out.println("\n Toper data");
		ar[pos].outputAllData();
	}
}
