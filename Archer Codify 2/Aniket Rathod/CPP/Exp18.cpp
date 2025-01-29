// Pointer as a member of class

#include<iostream>
using namespace std;

class MyDynamicType
{
	int *p;
	int cnt;
      public:
	void in()
	{
		cout<<endl<<"Enter the count: ";
		cin>>cnt;
		p=new int[cnt];

		cout<<endl<<"Enter the "<<cnt<<" elements: ";
		for(int i=0;i<cnt;i++)
		{
			cin>>*(p+i);
		}

	}	
	void out()
	{
		cout<<endl<<"Elements are: ";
		for(int i=0;i<cnt;i++)
		{
			cout<<"   "<<*(p+i);
		}
	}
	int countEvens()
	{
		int ec=0;
		for(int i=0;i<cnt;i++)
		{
			if(*(p+i)%2==0)
			{
				ec++;
			}
		}
		return ec;
	}
};

int main()
{
	MyDynamicType ob;

	ob.in();
	ob.out();
	cout<<endl<<"Even Count: "<<ob.countEvens();

	return 0;
}
