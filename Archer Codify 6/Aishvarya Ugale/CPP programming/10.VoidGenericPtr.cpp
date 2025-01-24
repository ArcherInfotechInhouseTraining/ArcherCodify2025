#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    float ft=3.4;
    int x=3245;

    void *gp; /// generic pointer

    gp=&ch;
    cout<<endl<<" ch using gp:"<<*(char*)gp; // classic way of casting
    cout<<endl<<" ch using gp:"<<*static_cast<char*>(gp)<<endl;// modern way of casting

    gp=&ft;
    cout<<endl<<" ft using gp:"<<*(float*)gp; // classic way of casting
    cout<<endl<<" ft using gp:"<<*static_cast<float*>(gp)<<endl;// modern way of casting

    gp=&x;
    cout<<endl<<" x using gp:"<<*(int*)gp; // classic way of casting
    cout<<endl<<" xusing gp:"<<*static_cast<int*>(gp)<<endl;// modern way of casting

    return 0;
}
