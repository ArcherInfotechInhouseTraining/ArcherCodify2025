// another way
#include<iostream>
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
	void addtime(Time a,Time b)				 // 3 : 40 : 45
	{						                 // 5 : 30 : 50
                                             //-1----1-------
		ss = b.ss + a.ss;			         // 9 : 11 : 35
		mm = b.mm + a.mm + (ss/60);
		ss = ss%60;

		hh = b.hh + a.hh + (mm/60);
		mm = mm%60;
	}
};
int main()
{
	Time t1, t2, t3;

	t1.intime();
	t2.intime();

	t3.addtime(t1,t2);

	cout<<endl<<"T1: "; t1.outtime();
	cout<<endl<<"T2: "; t2.outtime();
	cout<<endl<<"T3: "; t3.outtime();

	return 0;
}
