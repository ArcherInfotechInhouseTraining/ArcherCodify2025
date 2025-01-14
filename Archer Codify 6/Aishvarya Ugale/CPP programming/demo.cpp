#include<iostream>
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
}
