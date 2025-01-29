// Write a program to add two time objects

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

        Time addtime(Time a)				    // 3 : 40 : 45
	    {						                // 5 : 30 : 50
		    Time tmp;				            //-1----1-------
		    tmp.ss = ss + a.ss;			        // 9 : 11 : 35 
		    tmp.mm = mm + a.mm + (tmp.ss/60);
		    tmp.ss = tmp.ss%60;
    
		    tmp.hh = hh + a.hh + (tmp.mm/60);
		    tmp.mm = tmp.mm%60;

		    return tmp;
	}
};

int main()
{
    Time t1, t2, t3;

    t1.intime();
    t2.intime();

    t3=t2.addtime(t1);

    cout<<endl<<"T1: "; t1.outtime();
    cout<<endl<<"T2: "; t2.outtime();
    cout<<endl<<"T3: "; t3.outtime();

    return 0;
}