
#include<iostream>
using namespace std;

class BankAccount
{
  private:
	char nm[40];
	int accno;
	char pass[20];
  public:
	void input()
	{
		cout<<endl<<"enter the account holder name: ";
		cin.getline(nm,40);
		cout<<endl<<"enter the account number: ";
		cin>>accno;
		cout<<endl<<"enter the account password: ";
		cin.ignore();
		cin.getline(pass,40);
	}
	void display()
	{
		cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
	}
};

int main()
{
	BankAccount b1, b2;

	b1.input();
	b2.input();

	b1.display();
	b2.display();

	return 0;
}
