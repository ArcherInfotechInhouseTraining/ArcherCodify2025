// Returning data from member function

	// Enter the item code and price and display the list and total


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
		cout<<endl<<"Enter the item code and price: ";
		cin>>icode>>iprice;
	}
	void outdata()
	{
		cout<<endl<<" Item code: "<<icode<<"\t Price: "<<iprice;
	}
	float getprice()
	{
		return iprice;
	}
};
int main()
{
	int i,cnt;

	cout<<endl<<"Enter the count: ";
	cin>>cnt;
	Item *p=new Item[cnt];

	cout<<"\n Enter the details of "<<cnt<<" Items: ";
	for(i=0;i<cnt;i++)
	{
		(p+i)->indata();
	}

	cout<<endl<<"-------- Item List -------";
	for(i=0;i<cnt;i++)
	{
		(p+i)->outdata();
	}

	// total calc

	float tot=0.0;
	for(i=0;i<cnt;i++)
	{
		tot=tot+(p+i)->getprice();
	}
	cout<<endl<<"Total Bill: "<<tot;

	return 0;
}









