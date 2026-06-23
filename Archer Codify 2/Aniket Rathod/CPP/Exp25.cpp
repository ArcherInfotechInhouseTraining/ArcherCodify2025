// add 10 to every element (hh=10; mm=10; ss=10)

#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	int hh;
	int mm;
	int ss;
    
    public:
	void intime()
	{
		cout<<endl<<"Enter the HH:MM:SS: ";
		cin>>hh>>mm>>ss;
	}

	void outtime()
	{
		cout<<hh<<":"<<mm<<":"<<ss;
	}

	void addtime(int x,Time b)			
	{						
							
		ss = b.ss + x;				
		mm = b.mm + x + (ss/60);
		ss = ss%60;

		hh = b.hh + x + (mm/60);
		mm = mm%60;
	}
};

int main()
{
	Time t1, t2, t3;

	t1.intime();
	t2.intime();

	t3.addtime(10,t2);

	cout<<endl<<"T1: "; t1.outtime();
	cout<<endl<<"T2: "; t2.outtime();
	cout<<endl<<"T3: "; t3.outtime();

	return 0;
}
