// Nesting of member function
//  Define the class Number and define some functions within it to process the value.

#include<iostream>
using namespace std;

class Number
{
	int no;
    public:
	void input(int a)
	{
		no=a;
	}
	void output()
	{
		cout<<endl<<"Number is: "<<no;
	}
	int getreverse()
	{
		int rev=0;
		int n=no;
		while(n!=0)
		{
			rev=(rev*10)+(n%10);
			n=n/10;
		}
		return rev;
	}
	char ispalindrome()
	{
		if(no==getreverse())
			return 'y';
		else
			return 'n';
	}
};

int main()
{
	int t;
	cout<<endl<<"Enter the no: ";
	cin>>t;

	Number nob;
	nob.input(t);
	nob.output();
	cout<<endl<<"Reverse is: "<<nob.getreverse();

	Number ob1;
	cout<<endl<<"Enter the no: ";
	cin>>t;
	ob1.input(t);
	ob1.output();

	char ans=ob1.ispalindrome();
	if(ans=='y')
		cout<<endl<<"Number is Palindrome";
	else
		cout<<endl<<"Number is not Palindrome";

	return 0;
}
