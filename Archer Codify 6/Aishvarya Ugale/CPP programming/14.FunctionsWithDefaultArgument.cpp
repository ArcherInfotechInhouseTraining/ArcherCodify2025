
	/* Function with default arguments:

	C++ allows you to assign the default values to the formal arguments, which are used when
	function call does not provides the values via call.

	But note that the values must be assiged from right to left to formal arguments.
	*/


#include<iostream>
using namespace std;
float findintr( int pa, float roi=12.1, int noy=5)
{
    float ans=(pa*roi*noy)/100;
    return ans;
}
int main()
{
    int p,n;
    float r,si;

    cout<<endl<<"Enter the values of p,r and n: ";
    cin>>p>>r>>n;

    si=findintr(p,r,n);
    cout<<endl<<"SI1:"<<si;

    si=findintr(p,r);
    cout<<endl<<"SI2:"<<si;

    si=findintr(p);
    cout<<endl<<"SI3:"<<si;

    return 0;
}
