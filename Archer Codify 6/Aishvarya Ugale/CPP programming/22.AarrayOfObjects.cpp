
	/*/ Array of objects

		iar
		 [] [] [] [] [] [] [] [] []

	// Enter the item code and price and display the list.

	*/

#include<iostream>
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

	};
	int main()
	{
	    Item arr[3];
	    int i;
	    cout<<"\nEnter the details of 3 Items: ";
	    for(i=0;i<3;i++)
	{
		arr[i].indata();
	}

	cout<<endl<<"-------- Item List -------";
	for(i=0;i<3;i++)
	{
		arr[i].outdata();
	}

	return 0;
}



