// Create the class student and input/display the info of two students.

#include<iostream>
using namespace std;
class student
{
    char nm[40];
    int Rno,Age;
    float Per;
public:
    void input()
    {
        cout<<"Enter Name of the student:";
        //cin.ignore();
        fflush(stdin);
        cin.getline(nm,40);

        cout<<"Enter Roll no,Age,Percentage:";
        cin>>Rno>>Age>>Per;

    }


    void display()
    {
        cout<<"Name: "<<nm<<"\tRoll No: "<<Rno<<"\tAge: "<<Age<<"\tPercentage: "<<Per<<endl;
    }
};



int main()
{
    student s1,s2;
    s1.input();
    s2.input();

    s1.display();
    s2.display();

    return 0;
}
