// Defining member function outside of class

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char nm[50];
        int rno;
        int age;
        float per;

    public:
        void input();
        void display();
};

void Student::input()
{
    cout<<endl<<"Enter the Student Name: ";
    cin.ignore();
    cin.getline(nm,50);

    cout<<endl<<"Enter the Roll No, Age and percentage: ";
    cin>>rno>>age>>per;
}

void Student::display()
{
    cout<<endl<<"Student Name: "<<nm<<"\t Roll No: "<<rno<<"\t Age: "<<"\t Percentage: ";
}

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    s1.display();
    s2.display();

    return 0;
}