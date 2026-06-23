/*#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
	char nm[40];
	int rno;
	int age;
	float per;
    public:
	void input(char a_nm[], int a_rno, int a_age, float a_per)
	{
		strcpy(nm,a_nm);
		rno=a_rno;
		age=a_age;
		per=a_per;
	}
	void display()
	{
		cout<<endl<<"Student Name: "<<nm<<"\t Age: "<<age<<"\t RNO: "<<rno<<"\t Percentage: "<<per;
	}
};
int main()
{
	Student s1, s2;

	s1.input("mansi",11,23,78.56);

	char m_nm[50];
	int m_rno, m_age;
	float m_per;

	cout<<endl<<"Enter the student name: ";
	//cin.ignore();
	cin.getline(m_nm,40);
	cout<<endl<<"Enter the RNO, AGE and PERCENTAGE: ";
	cin>>m_rno>>m_age>>m_per;

	s2.input(m_nm, m_rno, m_age, m_per);

	s1.display();
	s2.display();

	return 0;
}
*/


/*#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
	char nm[40];
	int rno;
	int age;
	float per;
    public:
	void Student::input(char a_nm[], int a_rno, int a_age, float a_per)
	{
		strcpy(nm,a_nm);
		rno=a_rno;
		age=a_age;
		per=a_per;
	}
	void Student::display()
	{
		cout<<endl<<"Student Name: "<<nm<<"\t Age: "<<age<<"\t RNO: "<<rno<<"\t Percentage: "<<per;
	}
};
int main()
{
	Student s1, s2;

	s1.input("Ajit",11,23,78.56);

	char m_nm[50];
	int m_rno, m_age;
	float m_per;

	cout<<endl<<"Enter the student name: ";
	//cin.ignore();
	cin.getline(m_nm,40);
	cout<<endl<<"Enter the RNO, AGE and PERCENTAGE: ";
	cin>>m_rno>>m_age>>m_per;

	s2.input(m_nm, m_rno, m_age, m_per);

	s1.display();
	s2.display();

	return 0;
}*/



//array of class
/*#include<iostream>
using namespace std;
class Item
{
    private:
      int ino;
      float price;
    public:
     void in()
     {
         cout<<"\n enter the items:";
         cin>>ino>>price;
     }
     void out()
     {
         cout<<endl<<"\n item number:"<<ino<<"\t price of item:"<<price;
     }
     };
     
    int main()
    {
        Item iarr[3];
        int i;
        cout<<"\n input the data:";
        for(i=0;i<3;i++)
        {
            iarr[i].in();
        }
        cout<<"\n output the data:";
        for(i=0;i<3;i++)
        {
            iarr[i].out();
        }
        return 0;
 }*/
 
/*// pointer to the data
 #include<iostream>
using namespace std;
class Item
{
    private:
      int ino;
      float price;
    public:
     void in()
     {
         cout<<"\n enter the items:";
         cin>>ino>>price;
     }
     void out()
     {
         cout<<endl<<"\n item number:"<<ino<<"\t price of item:"<<price;
     }
     };
     
    int main()
    {
        //Item iarr[3];
        int cnt,i;
        cout<<"\n enter the count:";
        cin>>cnt;
        Item *p=new Item[cnt];
        cout<<"\n input the data:";
        for(i=0;i<cnt;i++)
        {
            p[i].in();
        }
        cout<<"\n output the data:";
        for(i=0;i<cnt;i++)
        {
            p[i].out();
        }
        return 0;
 }*/
 

        
    
        // pointer notations
/* #include<iostream>
using namespace std;
class Item
{
    private:
      int ino;
      float price;
    public:
     void in()
     {
         cout<<"\n enter the items:";
         cin>>ino>>price;
     }
     void out()
     {
         cout<<endl<<"\n item number:"<<ino<<"\t price of item:"<<price;
     }
     };
     
    int main()
    {
        //Item iarr[3];
        int cnt,i;
        cout<<"\n enter the count:";
        cin>>cnt;
        Item *p=new Item[cnt];
        cout<<"\n input the data:";
        for(i=0;i<cnt;i++)
        {
            (p+i)->in();
        }
        cout<<"\n output the data:";
        for(i=0;i<cnt;i++)
        {
            (p+i)->out();
        }
        return 0;
 }*/
    


// pointer to the data
 #include<iostream>
using namespace std;
class Item
{
    private:
      int ino;
      float price;
    public:
     void in()
     {
         cout<<"\n enter the items:";
         cin>>ino>>price;
     }
     void out()
     {
         cout<<endl<<"\n item number:"<<ino<<"\t price of item:"<<price;
     }
     
     float getprice()
     {
         return price;
         
     }
};
    int main()
    {
        //Item iarr[3];
        int cnt,i;
        cout<<"\n enter the count:";
        cin>>cnt;
        Item *p=new Item[cnt];
        cout<<"\n input the data:";
        for(i=0;i<cnt;i++)
        {
            p[i].in();
        }
        cout<<"\n output the data:";
        for(i=0;i<cnt;i++)
        {
            p[i].out();
        }
        float total=0.0;
        for(i=0;i<cnt;i++)
        {
            total=total+(p+i)->getprice();
            
        }
        cout<<"\n total is :"<<total;
        return 0;
 }




//
#include<stdio.h>
int main()
{
    char s1[30],str[30];
    printf("\n enter the string:");
    getch(s1);
     for(i=0;i<str[i]!=0;i++)
     {
         for(j=i+1; ;j++){
         if(str[j]=='\0')
         {
             for(i--,j=i;j<=i;i--,j++)
             {
                printf("\n reverse: %s",str[i];)
             }
         }
     }
     }
     return 0;
     
    
}

