// Passing the arguments to member functions.

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char nm[40];
        int rno;
        int age;
        float per;

    public:
        void input(char a_nm[], int a_rno, int a_age, float a_per)
        {
            strcpy(nm,a_nm);
            rno=a_rno;
            age=a_age;
            per=a_per;
        }

        void display()
        {
            cout<<endl<<"Student Name: "<<nm<<"\t Roll NO: "<<rno<<"\t Age: "<<age<<"\t Percentage: "<<per;
        }
};

int main()
{
    Student s1, s2;

    s1.input("Ankush",22,21,77.35);

    char b_nm[50];
    int b_rno, b_age;
    float b_per;

    cout<<endl<<"Enter student Name: ";
    cin.getline(b_nm,50);
    cout<<endl<<"Enter the Roll No, Age and Percentage: ";
    cin>>b_rno>>b_age>>b_per;

    s2.input(b_nm,b_rno,b_age,b_per);

    s1.display();
    s2.display();

    return 0;
}