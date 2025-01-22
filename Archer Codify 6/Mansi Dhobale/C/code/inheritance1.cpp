#include<stdio.h>
#include<string.h>
using namespace std;
class Demo()
{
    static int cnt;
    public:
    demo()
    {
        cnt++;
        cout<<"\b object"<<cnt<<"is created";
    }
    ~demo()
    {
        cout<<"\n object"<<cnt<<"is deleted";
        cnt--;
    }
};
int Demo::cnt;
int main()
{
    cout<<"\n program start";
    Demo d1,d2;
    cout<<"\n in main";
    {
        cout<<endl<<"start of inner scope";
        Demo d3,d4;
        cout<<endl<<"end of the outer scope";
    }
    cout<<"\n end of outer scope";
    cout<<"\n end of the program";
    return 0;
}
