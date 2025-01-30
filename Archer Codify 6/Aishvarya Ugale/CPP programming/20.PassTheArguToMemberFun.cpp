// Passing the arguments to member functions.

#include<iostream>
#include<string.h>
using namespace std;

class student
{
//private:
    char nm[40];
    int Rno,Age;
    float Per;
public:
    void input(char a_nm[],int a_Rno,int a_Age,float a_Per)
    {
        strcpy(nm,a_nm);
        Rno=a_Rno;
        Age=a_Age;
        Per=a_Per;
    }

    void display()
    {
         cout<<"Name: "<<nm<<"\tRoll No: "<<Rno<<"\tAge: "<<Age<<"\tPercentage: "<<Per<<endl;
    }
};

int main()
{
    student s1,s2;
    s1.input("Aish",58,20,83.83);

    char m_nm[40];
    int m_Rno,m_Age;
    float m_Per;

     cout<<"Enter Name of the student:";
        //cin.ignore();
        fflush(stdin);
        cin.getline(m_nm,40);

        cout<<"Enter Roll no,Age,Percentage:";
        cin>>m_Rno>>m_Age>>m_Per;

         s2.input( m_nm,m_Rno, m_Age, m_Per);

         s1.display();
         s2.display();
}
