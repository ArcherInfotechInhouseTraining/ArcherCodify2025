/// WAP to calc the simple interest.
#include<iostream>
using namespace std;
int main()
{
    int pa;
    cout<<endl<<"Enter the pr. amount: ";
    cin>>pa;

    double roi;// dynamic decl
    cout<<endl<<"Enter the rate of intr: ";
    cin>>roi;

    int noy; // dynamic decl
    cout<<endl<<"Enter the dur: ";
    cin>>noy;

    double si=(pa*roi*noy)/100; // dynamic init
    cout<<endl<<"simple interest: "<<si;

    return 0;
}
