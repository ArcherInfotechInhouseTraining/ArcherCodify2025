/* 
pointer to objects

		*p
		 [] -------> [] [] [] [] [] [] [] []

Enter the item code and price and display the list.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Item
{
	int icode;
	float iprice;

	public:
		void indata()
		{
			cout<<endl<<"Enter the Item Code & Price: ";
			cin>>icode>>iprice;
		}

		void outdata()
		{
			cout<<endl<<"Item Code: "<<icode<<"\t Price: "<<iprice;
		}
};

int main()
{
	int i, cnt;

	cout<<endl<<"Enter the count: ";
	cin>>cnt;
	Item *p=new Item[cnt];

	cout<<endl<<"\n Enter the details of "<<cnt<<" Items: ";

	for(i=0;i<cnt;i++)
	{
		p[i].indata();
	}

	cout<<endl<<"-------Item List-------";

	for(i=0;i<cnt;i++)
	{
		p[i].outdata();
	}

	return 0;
}