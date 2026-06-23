// Add one more member function

#include<iostream>
#include<string.h>
using namespace std;
class MyArray
{
	int x[10];
   public:
	void in()
	{
		cout<<endl<<"Enter the 10 nos: ";
		for(int i=0;i<10;i++)
		{
			cin>>x[i];
		}
	}
	void out()
	{
		cout<<endl<<"Enter the 10 nos: ";
		for(int i=0;i<10;i++)
		{
			cout<<"    "<<x[i];
		}
	}
	int getprimecount()
	{
	    int i,cnt=0,d,flg;
	    for(i=0;i<10;i++)
        {
            d=2;
            flg=0;
            while(d<=(x[i]/2))
            {
                if(x[i]%d==0)
                {
                    flg=1;
                    break;
                }
                d++;
            }
            if(flg==0)
                cnt++;
        }
        return cnt;
	}
};

int main()
{
	MyArray ob1;

	ob1.in();
	ob1.out();

	int t=ob1.getprimecount();
	cout<<endl<<"Prime Count is: "<<t;

	return 0;
}
