// another way
// Calculate travel time between A and B

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

	void addtime(Time a,Time b)				
	{						                
							                
		ss = b.ss - a.ss;			         
		mm = b.mm - a.mm - (ss/60);
		ss = ss%60;
		
		hh = b.hh - a.hh - (mm/60);
		mm = mm%60;
	}
};

int main()
{
	Time t1, t2, t3;

	t1.intime();
	t2.intime();

	t3.addtime(t1,t2);

	cout<<endl<<"Trip Start: "; t1.outtime();
	cout<<endl<<"Trip End: "; t2.outtime();
	cout<<endl<<"Travel Time: "; t3.outtime();

	return 0;
}
