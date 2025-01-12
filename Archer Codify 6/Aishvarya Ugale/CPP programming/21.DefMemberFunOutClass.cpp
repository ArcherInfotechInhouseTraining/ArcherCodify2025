
	/* Defining member function outside of class

	In C++, you are allowed to define the member functuin outside of class with out changine the
	basic meaning. In such case same function must be decl. within class.

	def. syntax:

		<ret_type> <class_nm>::<function_nm>(<argu_if_any>)
		{
			------------------;
			------------------;
			------------------;
		}
*/

#include<iostream>
using namespace std;
class student
{
    char nm[40];
    int Rno,Age;
    float Per;
public:
    void input();


    void display();

};

 void student::input()
    {
        cout<<"Enter Name of the student:";
        //cin.ignore();
        fflush(stdin);
        cin.getline(nm,40);

        cout<<"Enter Roll no,Age,Percentage:";
        cin>>Rno>>Age>>Per;

    }
    void  student::display()
    {
        cout<<"Name: "<<nm<<"\tRoll No: "<<Rno<<"\tAge: "<<Age<<"\tPercentage: "<<Per<<endl;
    }

int main()
{
    student s1,s2;
    s1.input();
    s2.input();

    s1.display();
    s2.display();

    return 0;
}
