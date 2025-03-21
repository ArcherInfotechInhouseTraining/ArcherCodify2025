// Friend Function
// 1)   outside function as a friend of class

#include <iostream>
using namespace std;

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

	friend void showinfo(Person);
};

void showinfo(Person a)
{
	cout<<endl<<"Person Information - Name: "<<a.nm<<"\t Age: "<<a.age;
}

int main()
{
	Person ob;
	ob.in();
	ob.display();

	showinfo(ob);	
	return 0;
}
