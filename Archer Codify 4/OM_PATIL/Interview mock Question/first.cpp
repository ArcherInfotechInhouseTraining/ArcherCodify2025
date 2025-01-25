#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 3, 2, 7, 5};
    int pos;
    int ans=7;//Given the largest value in array
    

    // display array.
    for (int i = 0; i < 6; i++)
    {
        cout << "\t" << arr[i];
    }
    cout << endl<< "Enter the array pos:";
    cin >> pos;
    cout << endl<<arr[pos];

    //nearest largest element
    for(int i=0;i<6;i++)
    {
        for(int j=i;j<6;j++)
        {
            if(arr[pos]<arr[i])
            {
                cout<<endl<<arr[i];

                if(arr[i]<ans)
                {
                    ans=arr[i];
                    cout<<endl<<"Nearest largest value is:"<<arr[i];
                }
            };
        }
        
    }

};
