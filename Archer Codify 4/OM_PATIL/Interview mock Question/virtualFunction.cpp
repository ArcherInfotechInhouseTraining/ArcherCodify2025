#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void area()
        {

        }
};
class Rect:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In Rect area()";
        }
};
class Circle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In Circle area()";
        }
};

class Triangle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In Triangle area()";
        }
};

int main()
{
    Shape *s;
    
    Rect r;
    s=&r;
    s->area();

    Circle c;
    s=&c;
    s->area();

    Triangle t;
    s=&t;
    s->area();

    return 0;
}