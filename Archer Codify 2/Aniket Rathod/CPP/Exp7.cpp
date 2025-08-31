// Create the class student and input/display the info of two students.

#include<iostream>
using namespace std;
class Student
{
    private:
        char nm[40];
        int rno;
        int age;
        float per;
    public:
        void input()
        {
            cout<<endl<<"Enter the student name: ";
            cin.ignore();
            cin.getline(nm,40);

            cout<<endl<<"Enter the RNO, AGE and PERCENTAGE: ";
            cin>>rno>>age>>per;
        }
        void display()
        {
            cout<<endl<<"Student Name: "<<nm<<"\t Age: "<<age<<"\t RNo: "<<rno<<"\t Percentage: "<<per;
        }
};

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    s1.display();
    s2.display();

    return 0;
}