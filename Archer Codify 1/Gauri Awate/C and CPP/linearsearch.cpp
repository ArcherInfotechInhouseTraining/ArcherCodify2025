#include<iostream>
using namespace std;
 bool search(int arr[],int size,int key)
{
	for(int i=0;i<size;i++){
	
	if(arr[i]==key){
	
	return 1;
     }

  }
   return 0;
}
int main()
{
	int arr[10]={12,-2,15,6,8,9,-7,4,-9,10};
	int key;
	cout<<"Enter the element to search:";
	cin>>key;
	bool found=search(arr,10,key);
	if(found)
	{
		cout<<"Key is present"<<endl;
	}
	else
	cout<<"Key is absent"<<endl;
}
