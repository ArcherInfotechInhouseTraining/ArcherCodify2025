/* 
Array of objects

		iar
		 [] [] [] [] [] [] [] [] []

Enter the item code and price and display the list.
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
            cout<<endl<<"Enter the Item Code and Price: ";
            cin>>icode>>iprice;
        }

        void outdata()
        {
            cout<<endl<<"Item code: "<<icode<<"\t Price: "<<iprice;
        }
};

int main()
{
    Item iar[3];
    int i;

    cout<<"\n Enter the details of 3 Items: ";
    for(i=0;i<3;i++)
    {
        iar[i].indata();
    }

    for(i=0;i<3;i++)
    {
        iar[i].outdata();
    }

    return 0;
}
