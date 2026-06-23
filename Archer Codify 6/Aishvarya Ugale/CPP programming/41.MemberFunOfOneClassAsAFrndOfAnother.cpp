// - Member function of one class as a friend of another

#include<iostream>
#include<string.h>
using namespace std;
class Person;
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
	void findelder(Person p);
};

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
	friend void Student::findelder(Person p);
};

void Student::findelder(Person p)
{
    cout<<endl<<"Elder Details"<<endl;
    if(age>p.age)
    {
        display();
    }
    else
    {
        p.display();
    }
}

int main()
{
	Person p;
	p.in();

	Student s;
	s.in();

	p.display();
	s.display();

	s.findelder(p);
	return 0;
}
