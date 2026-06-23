// Friend Function
// 2)   Outside function as a friend of two or more classes

#include<iostream>
#include<string.h>
using namespace std;

class Student; // Forward decl.
class Person
{
   private:
	char nm[50];
	int age;

   public:
	void in()
	{
		cout<<endl<<"Enter the name of person: ";
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}

	void display()
	{
		cout<<endl<<"Person Details - Name: "<<nm<<"\t Age: "<<age;
	}

	friend void FindElder(Person a, Student b);
};

class Student
{
   private:
	char nm[50];
	int age;

   public:
	void in()
	{
		cout<<endl<<"Enter the name of student: ";
		cin.ignore();
		cin.getline(nm,50);

		cout<<endl<<"Enter the age: ";
		cin>>age;
	}

	void display()
	{
		cout<<endl<<"Student Details - Name: "<<nm<<"\t Age: "<<age;
	}

	friend void FindElder(Person a,Student b);
};

void FindElder(Person a, Student b)
{
	if(a.age>b.age)
		cout<<endl<<"Elder Information - Name: "<<a.nm<<"\t Age: "<<a.age;
	else
		cout<<endl<<"Elder Information - Name: "<<b.nm<<"\t Age: "<<b.age;
}

int main()
{
	Person p;
	p.in();
	p.display();

	Student s;
	s.in();
	s.display();

	FindElder(p,s);
	return 0;
}
