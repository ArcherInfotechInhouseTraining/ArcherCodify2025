// ---------------------------------------basic-------------------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<" Wellcome c++ program ";
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<< "********** Personal Details ********** \n " ;
	cout<< "name:vikas singh\n " ;
	cout<< "age=24 \n " ;
	cout<< "cont no : 741236589 \n " ;
	cout<< "emial: vikas.singh@gmail.com \n " ;
	cout<< "add : ayush park  \n " ;
	return 0;
}
*/

// -------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Escape Sequence Characters Demo:\n";
//     cout << "1. Newline: Line 1\nLine 2\nLine 3\n";
//     cout << "2. Horizontal tab: Column 1\tColumn 2\tColumn 3\n";
//     cout << "3. Backspace: 123\b45\n";
//     cout << "4. Carriage return: 1234\rAB\n";
//     cout << "5. Backslash: C:\\path\\to\\file\n";
//     cout << "6. Single quote: It\'s raining.\n";
//     cout << "7. Double quote: She said, \"Hello.\"\n";
//     cout << "8. Null character: Hello\0World\n";
//     cout << "9. Alert (bell): Beep!\a\n";
//     cout << "10. Form feed: Page 1 \f Page 2\n";
//     cout << "11. Vertical tab: Line 1\vLine 2\n";
//     cout << "12. Question mark: What\? Why\?\n";
//     cout << "13. Octal representation: \110\145\154\154\157\n";
//     cout << "14. Hexadecimal representation: \x48\x65\x6C\x6C\x6F\n";
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     cout
//         << " good moring " << endl
//         << " work hellow";
//     int x = 10, y = 20;
//     float ft = 4.25;
//     cout << "\n Value of x and y is: " << x << setw(5) << y;
//     cout << endl
//          << "Value of x is: " << x << endl
//          << "Value of y=" << y
//          << "\t ft=" << setprecision(10) << ft;
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <iomanip> // for manipulators
// using namespace std;
// int main() {
//     // setw(int n)
//     cout << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Salary" << endl;
//     cout << setw(20) << "John Doe" << setw(10) << 30 << setw(15) << 50000.0 << endl;
//     // setprecision(int n) and fixed
//     double pi = 3.14159265359;
//     cout << setprecision(3) << fixed << "Pi: " << pi << endl;
//     // scientific
//     double num = 123456.789;
//     cout << scientific << "Number: " << num << endl;
//     // left and right
//     cout << setw(10) << left << "Left" << setw(10) << right << "Right" << endl;
//     // boolalpha
//     bool flag = true;
//     cout << boolalpha << "Flag: " << flag << endl;
//     // hex, oct, and dec
//     int value = 255;
//     cout << "Hex: " << hex << value << endl;
//     cout << "Oct: " << oct << value << endl;
//     cout << "Dec: " << dec << value << endl;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	// Declaring integer constants
	const int MAX_VALUE = 100;
	const int MIN_VALUE = 10;

	// Declaring floating-point constants
	const double PI = 3.14159;
	const float GRAVITY = 9.81f;

	// Declaring character constants
	const char NEWLINE = '\n';
	const char TAB = '\t';

	// Using constants in expressions
	int range = MAX_VALUE - MIN_VALUE;
	double circumference = 2 * PI * 5.0;

	// Outputting constants
	cout << "Range: " << range << NEWLINE;
	cout << "Circumference: " << circumference << NEWLINE;

   /// MIN_VALUE=10; /// error: assignment of read-only variable 'MIN_VALUE'|
	return 0;
}
*/
// -------------------------------------------------------------------------------------------------------

// - Using enum: (C++98)

// 	enum [<name>]{const1, const2,...,constN};

// 	e.g.	enum color {red, green, blue, black};		or 	enum {red, green, blue, black};

// 	enum color {RED, GREEN, BLUE, BLACK};	or 	enum {RED, GREEN, BLUE, BLACK};

// 	RED	Equivalent to 0
// 	GREEN   Equivalent to 1
// 	BLUE    Equivalent to 2
// 	BLACK   Equivalent to 3

// Unscoped Enum:
// // Declaration
// enum Color { RED, GREEN, BLUE};
// // Usage
// Color c = RED;

// Scoped Enum:
// // Declaration
// enum class Fruit {
//     APPLE,
//     BANANA,
//     ORANGE
// };
// Usage
// Fruit f = Fruit::APPLE;

// using unscoped

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     enum Color { RED=7, GREEN=20, BLUE};
//     enum Ink {BLACK, PINK, YELLOW, RED}; //error: 'RED' conflicts with a previous declaration|

//     cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE;
//     cout<<endl<<" Colors:"<<Color::RED<<"\t"<<Color::GREEN<<"\t"<<Color::BLUE;

//     cout<<endl<<" INK:"<<BLACK<<"\t"<<PINK<<"\t"<<BLUE; // Take the value from 1st enum

//     return 0;
// }

// using scoped

// #include<iostream>
// using namespace std;
// int main()
// {
//     enum class Color {RED=7, GREEN=20, BLUE};
//     enum class Ink {BLACK, PINK, YELLOW, RED};

//    // cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE; //error: 'RED' was not declared in this scope|
//     cout<<endl<<" Colors:"<<(int)Color::RED<<"\t"<<(int)Color::GREEN<<"\t"<<(int)Color::BLUE;

//     cout<<endl<<" INK:"<<(int)Ink::BLACK<<"\t"<<(int)Ink::PINK<<"\t"<<(int)Ink::RED;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------

// #include<iostream>
// #include <iostream>
// int main() {
//     int intValue;
//     short shortValue;
//     long longValue;
//     long long longLongValue;

//     // Input different types of integers
//     std::cout << "Enter an integer (int): ";
//     std::cin >> intValue;

//     std::cout << "Enter an integer (short): ";
//     std::cin >> shortValue;

//     std::cout << "Enter an integer (long): ";
//     std::cin >> longValue;

//     std::cout << "Enter an integer (long long): ";
//     std::cin >> longLongValue;

//     // Display the input integers
//     std::cout << "Integer (int)"<<sizeof(int)<<": " << intValue << std::endl;
//     std::cout << "Integer (short)"<<sizeof(short)<<": " << shortValue << std::endl;
//     std::cout << "Integer (long)"<<sizeof(long)<<": " << longValue << std::endl;
//     std::cout << "Integer (long long)"<<sizeof(long long)<<": " << longLongValue << std::endl;

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// WAP to calc the simple interest.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int pa;  // dynmaic del
//     cout<<"enter the pr. amount:";
//     cin>>pa;

//     double roi;  // dymaic decl
//     cout<< " enter the rate od intr :";
//     cin>> roi;

//     int noy;  // dymaic decl
//     cout<<" enter the dur :";
//     cin>> noy;

//     double si=(pa*roi*noy)/100;
//     cout<<" simple interest : "<<si;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------------

// Fractional data input and display

// #include <iostream>
// using namespace std ;

// int main() {
//     float floatValue;
//     double doubleValue;
//     long double longDoubleValue;

//     // Input different types of fractional values
//     cout << "Enter a fractional value (float): ";
//     cin >> floatValue;

//     cout << "Enter a fractional value (double): ";
//     cin >> doubleValue;

//     cout << "Enter a fractional value (long double): ";
//     cin >> longDoubleValue;

//     // Display the input fractional values
//     std::cout << "Fractional value (float): " << floatValue << std::endl;
//     std::cout << "Fractional value (double): " << doubleValue << std::endl;
//     std::cout << "Fractional value (long double): " << longDoubleValue << std::endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     bool b1 = true;
//     bool b2 = false;
//     cout << " b1 is " << b1 << endl;
//     cout << " b2 is " << b2 << endl;

//     int x = 25, y = 45;
//     b1 = x > y;
//     b2 = x != y;
//     cout << " b1 is " << b1 << endl;
//     cout << " b2 is " << b2 << endl;
//     cout << std::boolalpha;
//     cout << endl
//          << "b1 is: " << b1;
//     cout << endl
//          << "b2 is: " << b2;
// }
// --------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// int main() {
//     char ch;
//     std::cout << "Enter a character: ";
//     std::cin >> ch;
//     std::cout << "Character entered: " << ch << std::endl;
//     return 0;
// }

// #include <iostream>
// int main() {
//     wchar_t wch;
//     std::wcout << L"Enter a wide character: ";
//     std::wcin >> wch;
//     std::wcout << L"Wide character entered: " << wch << std::endl;
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------
// character input - output

// #include <iostream>
// int main() {
//     char str[40];

//     std::cout<<std::endl<<"Enter any string: ";
//     std::cin>>str;
//     std::cout<<std::endl<<" str is: "<<str;

//     const int MAX_SIZE = 100;
//     char charArray[MAX_SIZE];
//     std::cout << std::endl<< "Enter a string with spaces: ";
//     // fflush(stdin);  // c program
//     std::cin.ignore();  // c+++ pro
//     std::cin.getline(charArray, MAX_SIZE);
//     std::cout << "Entered string: " << charArray << std::endl;

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------
/// Using void data type:

// - we know that, the void data type is used to mention the function returning nothing in response to call.
//   Also when function does no collect any argument, the we use the void

// 	i.e.	void show(void){....}

// - The another use of void is to declare the "Generic Pointer".
//   The generic pointer is a pointer which is convertable to any type.

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch='A';
//     float ft=3.4;
//     int x=3245;

//     void *gp; /// generic pointer

//     gp=&ch;
//     cout<<endl<<" ch using gp:"<<*(char*)gp; // classic way of casting
//     cout<<endl<<" ch using gp:"<<*static_cast<char*>(gp)<<endl;// modern way of casting

//     gp=&ft;
//     cout<<endl<<" ft using gp:"<<*(float*)gp; // classic way of casting
//     cout<<endl<<" ft using gp:"<<*static_cast<float*>(gp)<<endl;// modern way of casting

//     gp=&x;
//     cout<<endl<<" x using gp:"<<*(int*)gp; // classic way of casting
//     cout<<endl<<" xusing gp:"<<*static_cast<int*>(gp)<<endl;// modern way of casting

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------------
//  - :: (scope resolution operator):
//    The scope resolution operator is used to access the global member always
//    from any scope, It will access the global member even from the nested scope.

// #include<iostream>
// using namespace std;
// int x=1000; // Global member
// int main()
// {
// 	int x=100; // local to main()
// 	cout<<"\n In main(upper) x: "<<x<<"\t global x: "<<::x;
// 	{
// 		int a=x; // local to inner scope
// 		cout<<"\n Inner scope(upper) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
// 		int x=10;// local to inner scope
// 		a=x;
// 		cout<<"\n Inner scope(lower) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
// 	}
// 	cout<<"\n In main(lower) x: "<<x<<"\t global x: "<<::x;
// 	return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------

// - new (memory allocation operator) and delete (Memory release operator):

// new - Here is new is keyword, and acts as a memory allocation operator.
//       unlike C, it does require an explicit casting and also no need of
//       byte calculation, it will be done automatically.

// 	It is alternative to malloc(),calloc() and realloc()

// 	lets see  how malloc() is used in C

// 	int *p;
// 	p=(int*)malloc(cnt*sizeof(int));

// 	// In C++
// 	syntax:
// 		<ptr_variable> = new <data_type>[<cnt>];

// 	int *p;
// 	p=new int[cnt];

// delete - Here delete is keyword, and acts as a Memory release operator.
// 	 it will free/deletes/ releases the memory allocated for pointer variable
// 	 using new.

// 		in C:
// 			int *p;
// 			p=....
// 			free(p);

// 		In C++

// 		syntax:	delete <ptr_var>;

// 			int *p;
// 			p=....
// 			delete p;


// --------------------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int *p;
// 	int cnt;
// 	cout<<endl<<"Enter the element count: ";
// 	cin>>cnt;
// 	p=new int[cnt];
// 	cout<<endl<<"Enter the "<<cnt<<" nos: ";
// 	for(int i=0;i<cnt;i++)
// 	{
// 		cin>>*(p+i);
// 	}
// 	cout<<endl<<"Elements are: ";
// 	for(int i=0;i<cnt;i++)
// 	{
// 		///cout<<"  "<<*(p+i);
// 		///cout<<"\t"<<*(p+i);
// 		cout<<setw(6)<<*(p+i);
// 	}
// 	delete(p);
// 	cout<<endl<<"Elements are: ";
// 	for(int i=0;i<cnt;i++)
// 	{
// 		///cout<<"  "<<*(p+i);
// 		///cout<<"\t"<<*(p+i);
// 		cout<<setw(6)<<*(p+i);
// 	}
// 	return 0;
// }
// -----------------------------------------------------------------------------------------------------------------------------
//  - Pointer: It is used in the dynamic memory allocation to store an address
// 	    of variable. We may divide the pointer in two different parts.

// 	- Raw pointer: (Pointer we have seen in the C)
// 		The basic difference is in steade of malloc() and free(),new and delete used for memory allocation release
// 	- Smart pointer: Introduced in C++11, so we will see it in same chapter

// 	 Additionally c++ introduced

//                 - pointer to constant: pointer able to point to any location of
//                                        correct type, but when it is refering, it
//                                        will not allow to change the data from the
//                                        location where it is pointing.

//                 - Constant pointer:  It is pointing towards same location. means the
//                                      value of pointer variable(address) can not be changed once
//                                      it is initilizsd. you can change the value from
//                                      the location, where it is pointing.

// #include<iostream.h>
// //using namespace std; (run using onlinegdb TurboC++ Compiler)
// int main()
// {
//-------------------- pointer to constant ------------------
//     char const *ptr="hello";
//     cout<<endl<<"string is: "<<ptr;

//     ptr="Good Day";
//     cout<<endl<<"string is: "<<ptr;

//     // *(ptr+2)='a'; // will generate the error coz it is refered by pointer to constant

//     //-------------------- constant pointer  ------------------
//     char *const ptr1="how are you";
//     cout<<endl<<"string is: "<<ptr1;
//     *(ptr1+2)='a';
//     cout<<endl<<"now string is: "<<ptr1;

//    // ptr1="Bye Bye";   // error due to, you are trying to assign new address to constant pointer
//     cout<<endl<<"string is: "<<ptr1;
//    //-------------------------------------------------------
//     const char* const ptr2="good day";
//     cout<<"\n ptr2 is: "<<ptr2;

//     // ptr2="see you"; // error: con not modify the const object
//     // *(ptr2+2)='a'; // error: con not modify the const object

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

// - Reference:

// 	int x=10;	int& y=x; // Here y is alternative name of x, called alise
// 	int z=x;

// 		x     y	       z
// 		 [ 10 ]		[ 10 ]

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     int &y=x;
//     cout<<endl<<"x="<<x<<"\t y="<<y;

//     x=100;
//     cout<<endl<<"x="<<x<<"\t y="<<y;

//     y=150;
//     cout<<endl<<"x="<<x<<"\t y="<<y;

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// let's consider the following program.

/// class by value

// #include<iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int tmp;
//     tmp =a;
//     a=b;
//     b=tmp;
// }
// int main()
// {
//     int x=10,y=20;
//     cout<<endl<< "before swap :x="<<x<<"\t y="<<y;
//     swap(x,y);
//     cout<<endl<<"after swap :x="<<x<<"\t y="<<y;
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/// call by reference - using pointer

// #include<iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int tmp;
//     tmp =*a;
//     *a=*b;
//     *b=tmp;
// }
// int main()
// {
//     int x=10,y=20;
//     cout<<endl<<"before swap: x="<<x<<"\t y="<<y;
//     swap(&x,&y);
//     cout<<endl<<"after swap : x="<<x<<"\t y="<<y;
//     return 0;
// }

//-------------------------------------------------------------------------------------

/// call by reference - using reference variable
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
// }
// int main()
// {
//     int x = 10, y = 20;
//     cout << endl
//          << "before swap: x=" << x << "\t y=" << y;
//     swap(x, y);
//     cout << endl
//          << "after swap : x=" << x << "\t y=" << y;
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------- Function in C++: -----------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
//    Note: the function we have seen in C, is as it is in C++. Additionally the C++ function having
// 	      following features.

// 	Def: Group/Collection of instructions designed to perform the specific task.
// 	There are 3 different steps

// 	- decleration
// 	- calling
// 	- definitation

// 	consider the simple add() function,

// 	dec:
// 		int add(int, int);

// 	def:
// 		int add(int x, int y)
// 		{
// 			int t=x+y;
// 			return t;
// 		}

// 	call:
// 		int ans=add(a,b);

// Lets see,

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int add(int,int);
// int main()
// {
// 	int a,b,sum;
// 	cout<<endl<<"Enter two numbers: ";
// 	cin>>a>>b;
// 	sum=add(a,b);
// 	cout<<endl<<"Addition is: "<<sum;
// 	return 0;
// }
// int add(int x, int y)
// {
// 	int t=x+y;
// 	return t;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Function with default arguments:

// C++ allows you to assign the default values to the formal arguments, which are used when
// function call does not provides the values via call.

// But note that the values must be assiged from right to left to formal arguments.

// #include<iostream>
// using namespace std;
// float findintr( int pa, float roi=12.1, int noy=5)
// {
//     float ans=(pa*roi*noy)/100;
//     return ans;
// }
// int main()
// {
//     int p,n;
//     float r,si;

//     cout<<endl<<"Enter the values of p,r and n: ";
//     cin>>p>>r>>n;

//     si=findintr(p,r,n);
//     cout<<endl<<"SI1:"<<si;

//     si=findintr(p,r);
//     cout<<endl<<"SI2:"<<si;

//     si=findintr(p);
//     cout<<endl<<"SI3:"<<si;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Function with const argument

// we can use const as a qualifier to the formal arguments, so when it is decl. as a constant we can
// access it, but it is not allowed to change it. generally it is used to when the members are passed
// by reference.
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int countpalindromes(const int y[])  // try run without const and use y[i] in while rather than no
// {
//     int no,rev,cnt=0;
//     for(int i=0;i<5;i++)
//     {
//         no=y[i];
//         rev=0;
//         while(no!=0)
//         {
//             rev=(rev*10)+(no%10);
//             no=no/10;
//         }
//         if(y[i]==rev)
//         {
//             cnt++;
//         }
//     }
//     return cnt;
// };
// int countodds(int y[])
// {
//     int cnt=0;
//     for(int i=0;i<5;i++)
//     {
//         if(y[i]%2!=0)
//         {
//             cnt++;
//         }
//     }
//     return cnt;
// };
// int main()
// {
//     int x[]={11,22,3763,44,55};

//     cout<<endl<<"Array is: ";
//     for(int i=0;i<5;i++)
//     {
//         cout<<"   "<<x[i];
//     }
//     int pnc=countpalindromes(x);
//     cout<<endl<<"Palindrome number Count: "<<pnc;

//     int ec=countodds(x);
//     cout<<endl<<"Even Count: "<<ec;

//     return 0;
// }




// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Function Overloading:

// C does not allows you to wrire a function with same name in a single program. but in C++ it is allowed.
// But condition is that all these functions having same name must differ in terms of type of arguments
// passed, sequence in which they collected and number of arguments.

// If program contains multiple functions having same name and they differ in terms of type, sequence
// and count then it is known as function overloading. Note that returning type does not play any role in it.

// Again note one more thing by defining or after assigning the default argument, if compiler finds multiple
// copies with same signature/prototype it will generate an error message called ambigious error.

// #include <iostream>
// using namespace std;
// void add(int a, int b, int c)
// {
// 	cout<<endl<<"Addition 1 is: "<<(a+b+c);
// }
// void add(float a, float b)
// {
// 	cout<<endl<<"Addition 2 is: "<<(a+b);
// }

// int main()
// {
// 	int x,y;
// 	cout<<endl<<"Enter two int values: ";
// 	cin>>x>>y;
// 	add(x,y); // x and y is promoted to float

// 	int z;
// 	cout<<endl<<"Enter a single int value: ";
// 	cin>>z;
// 	add(x,y,z);

// 	float p,q;
// 	cout<<endl<<"Enter two float values: ";
// 	cin>>p>>q;
// 	add(p,q);

// 	return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------








// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Procedure Oriented Programming(POP):

// - More efforts are taken for defining the procedures. (Doing Things)
// - data moving from function to function for processing.
// - As the data is global, it having less security.
// - Normally it employs the modular opproach, and the function transforms the data from
//   one form to another.
// - Employs top-down approach in program design.

// //  Object Oriented Programming(OOP):

// - The data is core area of interst rather than defining the procedures.
// - Program is divided into number of objects.
// - Data structures are designed in a such way that they characterize the object
// - The function which process the data is wrapped in the same object which hold the data.
// - To attend the security, the data is normally decl. in private area of class
// - You can add new data and functions easily.
// - Follows the bottom-up approach in program design.

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Create the class student and input/display the info of two students.

// #include <iostream>
// using namespace std;
// class Student
// {
// private:
//     char nm[40];
//     int rno;
//     int age;
//     float per;

// public:
//     void input()
//     {
//         cout << endl  << "Enter the student name: ";
//         cin.ignore();
//         cin.getline(nm, 40);

//         cout << endl << "Enter the RNO, AGE and PERCENTAGE: ";
//         cin >> rno >> age >> per;
//     }
//     void display()
//     {
//         cout << endl << "Student Name: " << nm << "\t Age: " << age << "\t RNO: " << rno << "\t Percentage: " << per;
//     }
// };
// int main()
// {
//     Student a1, a2 ;
//     a1.input();
//     a2.input();

//     a1.display();
//     a2.display();

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------------------

// Passing the arguments to member functions.

// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student
// {
// private:
//     char nm[40];
//     int rno;
//     int age;
//     float per;

// public:
//     void input(char a_nm[], int a_rno, int a_age, float a_per)
//     {
//         strcpy(nm, a_nm);
//         rno = a_rno;
//         age = a_age;
//         per = a_per;
//     }
//     void display()
//     {
//         cout << endl
//              << "Student Name: " << nm << "\t Age: " << age << "\t RNO: " << rno << "\t Percentage: " << per;
//     }
// };
// int main()
// {
//     Student s1, s2;

//     s1.input("Ajit", 11, 23, 78.56);

//     char m_nm[50];
//     int m_rno, m_age;
//     float m_per;

//     cout << endl
//          << "Enter the student name: ";
//     cin.ignore();
//     cin.getline(m_nm, 40);
//     cout << endl
//          << "Enter the RNO, AGE and PERCENTAGE: ";
//     cin >> m_rno >> m_age >> m_per;

//     s2.input(m_nm, m_rno, m_age, m_per);

//     s1.display();
//     s2.display();

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Defining member function outside of class

// In C++, you are allowed to define the member functuin outside of class with out changine the
// basic meaning. In such case same function must be decl. within class.

// def. syntax:

// 	<ret_type> <class_nm>::<function_nm>(<argu_if_any>)
// 	{
// 		------------------;
// 		------------------;
// 		------------------;
// 	}

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// class Student
// {
//     private:
// 	char nm[40];
// 	int rno;
// 	int age;
// 	float per;
//     public:
// 	void input();
// 	void display();
// };
// void Student::input()
// {
// 	cout<<endl<<"Enter the student name: ";
// 	cin.getline(nm,40);

// 	cout<<endl<<"Enter the RNO, AGE and PERCENTAGE: ";
// 	cin>>rno>>age>>per;
// }
// void Student::display()
// {
// 	cout<<endl<<"Student Name: "<<nm<<"\t Age: "<<age<<"\t RNO: "<<rno<<"\t Percentage: "<<per;
// }

// int main()
// {
// 	Student s1, s2;

// 	s1.input();
// 	s2.input();

// 	s1.display();
// 	s2.display();

// 	return 0;
// }

// --------------------------------------------------------------------------------------
// / Array of objects

// 		iar
// 		 [] [] [] [] [] [] [] [] []

// 	Enter the item code and price and display the list.

// #include <iostream>
// #include <string.h>
// using namespace std;
// class Item
// {
// 	int icode;
// 	float iprice;
//     public:
// 	void indata()
// 	{
// 		cout<<endl<<"Enter the item code and price: ";
// 		cin>>icode>>iprice;
// 	}
// 	void outdata()
// 	{
// 		cout<<endl<<" Item code: "<<icode<<"\t Price: "<<iprice;
// 	}
// };
// int main()
// {
// 	Item iar[3];
// 	int i;

// 	cout<<"\n Enter the details of 3 Items: ";
// 	for(i=0;i<3;i++)
// 	{
// 		iar[i].indata();
// 	}

// 	cout<<endl<<"-------- Item List -------";
// 	for(i=0;i<3;i++)
// 	{
// 		iar[i].outdata();
// 	}

// 	return 0;
// }

//----------------------------------------------------------------------------------------------------------------

// Returning data from member function

// Enter the item code and price and display the list and total

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Item
// {
// 	int icode;
// 	float iprice;
//     public:
// 	void indata()
// 	{
// 		cout<<endl<<"Enter the item code and price: ";
// 		cin>>icode>>iprice;
// 	}
// 	void outdata()
// 	{
// 		cout<<endl<<" Item code: "<<icode<<"\t Price: "<<iprice;
// 	}
// 	float getprice()
// 	{
// 		return iprice;
// 	}
// };
// int main()
// {
// 	int i,cnt,tot;

// 	cout<<endl<<"Enter the count: ";
// 	cin>>cnt;
// 	Item *p=new Item[cnt];

// 	cout<<"\n Enter the details of "<<cnt<<" Items: ";
// 	for(i=0;i<cnt;i++)
// 	{
// 		(p+i)->indata();
// 	}
// 	cout<<endl<<"-------- Item List -------";
// 	for(i=0;i<cnt;i++)
// 	{
// 		(p+i)->outdata();
// 	}
// 	// total calc
// 	for(i=0;i<cnt;i++)
// 	{
// 		tot=tot+(p+i)->getprice();
// 	}
// 	cout<<endl<<"Total Bill: "<<tot;

// 	return 0;
// }

// ------------------------------------------------------------------------------------------------

// same program using pointer notations

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Item
// {
// 	int icode;
// 	float iprice;
//     public:
// 	void indata()
// 	{
// 		cout<<endl<<"Enter the item code and price: ";
// 		cin>>icode>>iprice;
// 	}
// 	void outdata()
// 	{
// 		cout<<endl<<" Item code: "<<icode<<"\t Price: "<<iprice;
// 	}
// 	float getprice()
// 	{
// 		return iprice;
// 	}
// };
// int main()
// {
// 	int i,cnt,tot;

// 	cout<<endl<<"Enter the count: ";
// 	cin>>cnt;
// 	Item *p=new Item[cnt];

// 	cout<<"\n Enter the details of "<<cnt<<" Items: ";
// 	for(i=0;i<cnt;i++)
// 	{
// 		(p+i)->indata();
// 	}
// 	cout<<endl<<"-------- Item List -------";
// 	for(i=0;i<cnt;i++)
// 	{
// 		(p+i)->outdata();
// 	}
// 	// total calc
// 	for(i=0;i<cnt;i++)
// 	{
// 		tot=tot+(p+i)->getprice();
// 	}
// 	cout<<endl<<"Total Bill: "<<tot;

// 	return 0;
// }

// ---------------------------------------------------------------------------------------------
// Returning data from member function

// Enter the item code and price and display the list and total

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Item
// {
// 	int icode;
// 	float iprice;
//     public:
// 	void indata()
// 	{
// 		cout<<endl<<"Enter the item code and price: ";
// 		cin>>icode>>iprice;
// 	}
// 	void outdata()
// 	{
// 		cout<<endl<<" Item code: "<<icode<<"\t Price: "<<iprice;
// 	}
// 	float getprice()
// 	{
// 		return iprice;
// 	}
// };
// int main()
// {
// 	int i,cnt;

// 	cout<<endl<<"Enter the count: ";
// 	cin>>cnt;
// 	Item *p=new Item[cnt];

// 	cout<<"\n Enter the details of "<<cnt<<" Items: ";
// 	for(i=0;i<cnt;i++)
// 	{
// 		(p+i)->indata();
// 	}

// 	cout<<endl<<"-------- Item List -------";
// 	for(i=0;i<cnt;i++)
// 	{
// 		(p+i)->outdata();
// 	}

// 	// total calc

// 	float tot=0.0;
// 	for(i=0;i<cnt;i++)
// 	{
// 		tot=tot+(p+i)->getprice();
// 	}
// 	cout<<endl<<"Total Bill: "<<tot;

// 	return 0;
// }

// ------------------------------------------------------------------------------------------------------
// Function overloading

// class Rect
// {
// 	int len;
// 	int brd;

// public:
// 	void in()
// 	{
// 		cout << endl
// 			 << "Enter the length and Breadth of rect: ";
// 		cin >> len >> brd;
// 	}
// 	void in(int a)
// 	{
// 		len = a;
// 		brd = a;
// 	}
// 	void in(int a1, int a2)
// 	{
// 		len = a1;
// 		brd = a2;
// 	}
// 	void out()
// 	{
// 		cout << endl
// 			 << "Length: " << len << "\t Breadth: " << brd;
// 	}
// 	int area()
// 	{
// 		return (len * brd);
// 	}
// };
// int main()
// {
// 	Rect rob1;
// 	rob1.in();
// 	rob1.out();
// 	cout << endl
// 		 << "Area of rect-1: " << rob1.area();

// 	Rect rob2;
// 	rob2.in(5);
// 	rob2.out();
// 	cout << endl
// 		 << "Area of rect-2: " << rob2.area();

// 	Rect rob3;
// 	int x, y;
// 	cout << endl
// 		 << "Enter the length and Breadth of rect: ";
// 	cin >> x >> y;
// 	rob3.in(x, y);
// 	rob3.out();
// 	cout << endl
// 		 << "Area of rect-3: " << rob3.area();

// 	return 0;
// }
//-------------------------------------------------------------------------------------------------------------

// Nesting of member function

//  Define the class Number and define some functions within it to process the value.
// #include <iostream>
// using namespace std;
// class Number
// {
// 	int no;

// public:
// 	void input(int a)
// 	{
// 		no = a;
// 	}
// 	void output()
// 	{
// 		cout << endl
// 			 << "Number is: " << no;
// 	}
// 	int getreverse()
// 	{
// 		int rev = 0;
// 		int n = no;
// 		while (n != 0)
// 		{
// 			rev = (rev * 10) + (n % 10);
// 			n = n / 10;
// 		}
// 		return rev;
// 	}
// 	char ispalindrome()
// 	{
// 		if (no == getreverse())
// 			return 'y';
// 		else
// 			return 'n';
// 	}
// };
// int main()
// {
// 	int t;
// 	cout << endl
// 		 << "Enter the no: ";
// 	cin >> t;

// 	Number nob;
// 	nob.input(t);
// 	nob.output();
// 	cout << endl
// 		 << "Reverse is: " << nob.getreverse();

// 	Number ob1;
// 	cout << endl
// 		 << "Enter the no: ";
// 	cin >> t;
// 	ob1.input(t);
// 	ob1.output();

// 	char ans = ob1.ispalindrome();
// 	if (ans == 'y')
// 		cout << endl
// 			 << "Number is Palindrome";
// 	else
// 		cout << endl
// 			 << "Number is not Palindrome";

// 	return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------

// Nesting of member function

//  Define the class Number and define some functions within it to process the value.

// #include <iostream>
// using namespace std;
// class Number
// {
// 	int no;
// public:
// 	void input(int a)
// 	{
// 		no = a;
// 	}
// 	void output()
// 	{
// 		cout << endl
// 			 << "Number is: " << no;
// 	}
// 	int getreverse()
// 	{
// 		int rev = 0;
// 		int n = no;
// 		while (n != 0)
// 		{
// 			rev = (rev * 10) + (n % 10);
// 			n = n / 10;
// 		}
// 		return rev;
// 	}
// 	char ispalindrome()
// 	{
// 		if (no == getreverse( ))
// 			return 'y';
// 		else
// 			return 'n';
// 	}
// };
// int main()
// {
// 	int t;
// 	cout << endl << "Enter the no: ";
// 	cin >> t;

// 	Number nob;
// 	nob.input(t);
// 	nob.output();
// 	cout << endl << "Reverse is: " << nob.getreverse();

// 	Number ob1;
// 	cout << endl << "Enter the no: ";
// 	cin >> t;
// 	ob1.input(t);
// 	ob1.output();

// 	char ans = ob1.ispalindrome();
// 	if (ans == 'y')
// 		cout << endl << "Number is Palindrome";
// 	else
// 		cout << endl
// 			 << "Number is not Palindrome";

// 	return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <string.h>
// using namespace std;
// class MyArray
// {
// 	int x[10];

// public:
// 	void in()
// 	{
// 		cout << endl << "Enter the 10 nos: ";
// 		for (int i = 0; i < 10; i++)
// 		{
// 			cin >> x[i];
// 		}
// 	}
// 	void out()
// 	{
// 		cout << endl << "Enter the 10 nos: ";
// 		for (int i = 0; i < 10; i++)
// 		{
// 			cout << "    " << x[i];
// 		}
// 	}
// 	int getprimecount()
// 	{
// 		int i, cnt = 0, d, flg;
// 		for (i = 0; i < 10; i++)
// 		{
// 			d = 2;
// 			flg = 0;
// 			while (d <= (x[i] / 2))
// 			{
// 				if (x[i] % d == 0)
// 				{
// 					flg = 1;
// 					break;
// 				}
// 				d++;
// 			}
// 			if (flg == 0)
// 				cnt++;
// 		}
// 		return cnt;
// 	}
// };
// int main()
// {
// 	MyArray ob1;

// 	ob1.in();
// 	ob1.out();

// 	int t = ob1.getprimecount();
// 	cout << endl << "Prime Count is: " << t;
// 	return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Pointer as a member of class
// #include <iostream>
// #include <string>
// using namespace std;
// class MyDynamicType
// {
// 	int *p;
// 	int cnt;
//       public:
// 	void in()
// 	{
// 		cout<<endl<<"Enter the count: ";
// 		cin>>cnt;
// 		p=new int[cnt];
// 		cout<<endl<<"Enter the "<<cnt<<" elements: ";
// 		for(int i=0;i<cnt;i++)
// 		{
// 			cin>>*(p+i);
// 		}

// 	}
// 	void out()
// 	{
// 		cout<<endl<<"Elements are: ";
// 		for(int i=0;i<cnt;i++)
// 		{
// 			cout<<"   "<<*(p+i);
// 		}
// 	}
// 	int countEvens()
// 	{
// 		int ec=0;
// 		for(int i=0;i<cnt;i++)
// 		{
// 			if(*(p+i)%2==0)
// 			{
// 				ec++;
// 			}
// 		}
// 		return ec;
// 	}
// };
// int main()
// {
// 	MyDynamicType ob;
// 	ob.in();
// 	ob.out();
// 	cout<<endl<<"Even Count: "<<ob.countEvens();
// 	return 0;
// }

// -----------------------------------------------------------------------------------------------------
//   homework🫡

// Menu driven program
// we have to store the runs scored by 3 players in N matches
// find current top scorer

// -----------------------------------------------------------------------------------------------------

// Passing object as an argument to member function

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Complex
// {
// 	int real;
// 	float img;
// 	public:
// 	void input()
// 	{
// 		cout<< endl << "enter the real part of nummber : ";
// 		cin>>real;
// 		cout<< endl << "enter the imaginary part of nummber : ";
// 		cin>>img;
// 	}
//     void output()
// 	{
// 		cout<<real<<"+j" <<img;
// 	}
//     void addcomplex(Complex a, Complex b)
// 	{
// 		real=a.real+b.real;
// 		img=a.img+b.img;
// 	}
// };
// int main()
// {
// 	Complex a1, a2, a3;
// 	a1.input();
// 	a2.input();
// 	cout<<endl<<"a1:";
// 	a1.output();
// 	cout<<endl<<"a2:";
// 	a2.output();
//     a3.addcomplex(a1,a2);
// 	cout<<endl<<"a3:";
// 	a3.output();
// 	return 0;
// }
// ------------------------------------------------------------------------------------------------------

// Another way - * Returning the object from member function *

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Complex
// {
// 	int real;
// 	float img;
//      public:
// 	void input()
// 	{
// 		cout<<endl<<"Enter the real part of number: ";
// 		cin>>real;
// 		cout<<endl<<"Enter the img part of number: ";
// 		cin>>img;
// 	}
// 	void output()
// 	{
// 		cout<<real<<"+j"<<img;
// 	}
// 	Complex addcomplex(Complex a)
// 	{
// 		Complex t;
// 		t.real=real+a.real;
// 		t.img=img+a.img;
// 		return t;
// 	}
// };
// int main()
// {
// 	Complex c1,c2,c3;
// 	c1.input();
// 	c2.input();

// 	cout<<endl<<"C1: ";
// 	c1.output();

// 	cout<<endl<<"C2: ";
// 	c2.output();

// 	c3=c1.addcomplex(c2);

// 	cout<<endl<<"C3: ";
// 	c3.output();

// 	return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Using friend function

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Complex
// {
// 	int real;
// 	float img;
//      public:
// 	void input()
// 	{
// 		cout<<endl<<"Enter the real part of number: ";
// 		cin>>real;
// 		cout<<endl<<"Enter the img part of number: ";
// 		cin>>img;
// 	}
// 	void output()
// 	{
// 		cout<<real<<"+j"<<img;
// 	}

//    friend Complex addcomplex(Complex a ,Complex b);
// };
// Complex addcomplex(Complex a , Complex b)
// 	{
// 		Complex t;
// 		t.real=a.real+ b.real;
// 		t.img= a.img+b.img;
// 		return t;
// 	}
// int main()
// {
// 	Complex c1,c2,c3;
// 	c1.input();
// 	c2.input();

// 	cout<<endl<<"C1: ";
// 	c1.output();

// 	cout<<endl<<"C2: ";
// 	c2.output();

// 	c3=addcomplex(c1,c2);

// 	cout<<endl<<"C3: ";
// 	c3.output();

// 	return 0;
// }

// -----------------------------------------------------------------------------------------

// Write a program to add two time objects
// #include<iostream>
// using namespace std;
// class Time
// {
// 	int hh;
// 	int mm;
// 	int ss;
//      public:
// 	void intime()
// 	{
// 		cout<<endl<<"Enter the HH:MM:SS: ";
// 		cin>>hh>>mm>>ss;
// 	}
// 	void outtime()
// 	{
// 		cout<<hh<<":"<<mm<<":"<<ss;
// 	}
// 	Time addtime(Time a)				               // 3 : 40 : 45
// 	{						                          // 5 : 30 : 50
// 		Time tmp;			        	             //-1----1-------
// 		tmp.ss = ss + a.ss;			                // 9 : 11 : 35
// 		tmp.mm = mm + a.mm + (tmp.ss/60);
// 		tmp.ss = tmp.ss%60;
// 		tmp.hh = hh + a.hh + (tmp.mm/60);
// 		tmp.mm = tmp.mm%60;
// 		return tmp;
// 	}
// };
// int main()
// {
// 	Time t1, t2, t3;

// 	t1.intime();
// 	t2.intime();

// 	t3=t2.addtime(t1);

// 	cout<<endl<<"T1: "; t1.outtime();
// 	cout<<endl<<"T2: "; t2.outtime();
// 	cout<<endl<<"T3: "; t3.outtime();

// 	return 0;
// }

//------------------------------------------------------------------------------

// 	// another way

// class Time
// {
// 	int hh;
// 	int mm;
// 	int ss;
//      public:
// 	void intime()
// 	{
// 		cout<<endl<<"Enter the HH:MM:SS: ";
// 		cin>>hh>>mm>>ss;
// 	}
// 	void outtime()
// 	{
// 		cout<<hh<<":"<<mm<<":"<<ss;
// 	}
// 	void addtime(Time a,Time b)				          // 3 : 40 : 45
// 	{						                         // 5 : 30 : 50
//-1----1-------
// 		ss = b.ss + a.ss;			               // 9 : 11 : 35
// 		mm = b.mm + a.mm + (ss/60);
// 		ss = ss%60;

// 		hh = b.hh + a.hh + (mm/60);
// 		mm = mm%60;
// 	}
// };
// int main()
// {
// 	Time t1, t2, t3;

// 	t1.intime();
// 	t2.intime();

// 	t3.addtime(t1,t2);

// 	cout<<endl<<"T1: "; t1.outtime();
// 	cout<<endl<<"T2: "; t2.outtime();
// 	cout<<endl<<"T3: "; t3.outtime();

// 	return 0;
// }

// //----------------------------------------------------------------------------------------

// #include<iostream>
// #include<string.h>
// using namespace std;

// class Time
// {
// 	int hh;
// 	int mm;
// 	int ss;
//      public:
// 	void intime()
// 	{
// 		cout<<endl<<"Enter the HH:MM:SS: ";
// 		cin>>hh>>mm>>ss;
// 	}
// 	void outtime()
// 	{
// 		cout<<hh<<":"<<mm<<":"<<ss;
// 	}
// 	void addtime(Time a,Time b)		                      	// 3 : 40 : 45
// 	{						                               // 5 : 30 : 50
// 						                               	//-1----1-------
// 		ss = b.ss + a.ss;			                   // 9 : 11 : 35
// 		mm = b.mm + a.mm + (ss/60);
// 		ss = ss%60;

// 		hh = b.hh + a.hh + (mm/60);
// 		mm = mm%60;
// 	}
// };
// int main()
// {
// 	Time t1, t2, t3;

// 	t1.intime();
// 	t2.intime();

// 	t3.addtime(t1,t2);

// 	cout<<endl<<"T1: "; t1.outtime();
// 	cout<<endl<<"T2: "; t2.outtime();
// 	cout<<endl<<"T3: "; t3.outtime();

// 	return 0;
// }

// //---------------------------------------------------------------------------------------

// #include<iostream>
// #include<string.h>
// using namespace std;

// class Time
// {
// 	int hh;
// 	int mm;
// 	int ss;
//      public:
// 	void intime()
// 	{
// 		cout<<endl<<"Enter the HH:MM:SS: ";
// 		cin>>hh>>mm>>ss;
// 	}
// 	void outtime()
// 	{
// 		cout<<hh<<":"<<mm<<":"<<ss;
// 	}
// 	void addtime(int x,Time b)			            // 3 : 40 : 55
// 	{						// 10: 10 : 10
// 							//-1----1-------
// 		ss = b.ss + x;				// 13 : 51 : 05
// 		mm = b.mm + x + (ss/60);
// 		ss = ss%60;

// 		hh = b.hh + x + (mm/60);
// 		mm = mm%60;
// 	}
// };
// int main()
// {
// 	Time t1, t2, t3;

// 	t1.intime();
// 	t2.intime();

// 	t3.addtime(10,t2);

// 	cout<<endl<<"T1: "; t1.outtime();
// 	cout<<endl<<"T2: "; t2.outtime();
// 	cout<<endl<<"T3: "; t3.outtime();

// 	return 0;
// }

// //==============================================================================================================

// 	// static data member and static member function

// class Item
// {
// 	int ic;
// 	float ip;
// 	static float tot;
//     public:
// 	void in()
// 	{
// 		cout<<endl<<"Enter the code and price: ";
// 		cin>>ic>>ip;
// 		tot=tot+ip;
// 	}
// 	void out()
// 	{
// 		cout<<endl<<"Item Code: "<<ic<<"\t Price: "<<ip;
// 	}
// 	void showtot()
// 	{
// 		cout<<"\n Total Bill: "<<tot;
// 	}
// };
// float Item::tot;
// int main()
// {
// 	Item i1, i2, i3;

// 	i1.in();
// 	i2.in();
// 	i3.in();

// 	i1.out();
// 	i2.out();
// 	i3.out();

// 	i1.showtot();	// i_.showtot();

// 	return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------------
// Friend Function

// - outside function as a friend of class
// - Member function of one class as a friend of another
// - friend class - all member functions of one class as a friend of another class

// - outside function as a friend of class

// #include <iostream>
// using namespace std;
// class Person
// {
// private:
// 	char nm[50];
// 	int age;
// public:
// 	void in()
// 	{
// 		cout << endl
// 			 << "Enter the name of person: ";
// 		cin.getline(nm, 100);
// 		cout << endl
// 			 << "Enter the age: ";
// 		cin >> age;
// 	}
// 	void display()
// 	{
// 		cout << endl
// 			 << "Person Details - Name: " << nm << "\t Age: " << age;
// 	}
// 	friend void showinfo(Person a);
// };
// void showinfo(Person a)
// {
// 	cout << endl << "Person Information - Name: " << a.nm << "\t Age: " << a.age;
// }
// int main()
// {
// 	Person ob;
// 	ob.in();
// 	ob.display();
// 	showinfo(ob);
// 	return 0;
// }
// --------------------------------------------------------------------------------------------------

// Outside function as a friend of two or more classes

// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student; // Forward decl.
// class Person
// {
// private:
// 	char nm[50];
// 	int age;
// public:
// 	void in()
// 	{
// 		cout << endl << "Enter the name of person: ";
// 		cin.getline(nm, 50);
// 		cout << endl << "Enter the age: ";
// 		cin >> age;
// 	}
// 	void display()
// 	{
// 		cout << endl << "Person Details - Name: " << nm << "\t Age: " << age;
// 	}
// 	friend void FindElder(Person a, Student b);
// };
// class Student
// {
// private:
// 	char nm[50];
// 	int age;
// public:
// 	void in()
// 	{
// 		cout << endl << "Enter the name of student: ";
// 		cin.ignore();
// 		cin.getline(nm, 50);
// 		cout << endl << "Enter the age: ";
// 		cin >> age;
// 	}
// 	void display()
// 	{
// 		cout << endl << "Student Details - Name: " << nm << "\t Age: " << age;
// 	}
// 	friend void FindElder(Person a, Student b);
// };
// void FindElder(Person a, Student b)
// {
// 	if (a.age > b.age)
// 		cout << endl << "Elder Information - Name: " << a.nm << "\t Age: " << a.age;
// 	else
// 		cout << endl
// 			 << "Elder Information - Name: " << b.nm << "\t Age: " << b.age;
// }
// int main()
// {
// 	Person p;
// 	p.in();
// 	p.display();

// 	Student s;
// 	s.in();
// 	s.display();

// 	FindElder(p, s);
// 	return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------
// - Member function of one class as a friend of another

// #include <iostream>
// #include <string.h>
// using namespace std;
// class Person;
// class Student
// {
// private:
// 	char nm[50];
// 	int age;
// public:
// 	void in()
// 	{
// 		cout << endl << "Enter the name of student: ";
// 		cin.ignore();
// 		cin.getline(nm, 50);
// 		cout << endl << "Enter the age: ";
// 		cin >> age;
// 	}
// 	void display()
// 	{
// 		cout << endl << "Student Details - Name: " << nm << "\t Age: " << age;
// 	}
// 	void findelder(Person p);
// };

// class Person
// {
// private:
// 	char nm[50];
// 	int age;
// public:
// 	void in()
// 	{
// 		cout << endl
// 			 << "Enter the name of person: ";
// 		cin.getline(nm, 50);

// 		cout << endl
// 			 << "Enter the age: ";
// 		cin >> age;
// 	}
// 	void display()
// 	{
// 		cout << endl << "Person Details - Name: " << nm << "\t Age: " << age;
// 	}
// 	friend void Student::findelder(Person p);
// };

// void Student::findelder(Person p)
// {
// 	cout << endl << "Elder Details" << endl;
// 	if (age > p.age)
// 	{
// 		display();
// 	}
// 	else
// 	{
// 		p.display();
// 	}
// }
// int main()
// {
// 	Person p;
// 	p.in();

// 	Student s;
// 	s.in();

// 	p.display();
// 	s.display();

// 	s.findelder(p);
// 	return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------

// - friend class - all member functions of one class as a friend of another class

// #include <iostream>
// #include <string.h>
// using namespace std;
// class B;
// class A
// {
// private:
// 	int a;
// 	friend class B;
// };
// class B
// {
// private:
// 	int b;
// public:
// 	void in(A &ob)
// 	{
// 		cout << "Enter the val of a: ";
// 		cin >> ob.a;
// 		cout << "Enter the val of b: ";
// 		cin >> b;
// 	}
// 	void out(A ob)
// 	{
// 		cout << endl
// 			 << "a: " << ob.a;
// 		cout << endl
// 			 << "b: " << b;
// 	}
// };
// int main()
// {
// 	A ob1;
// 	B ob2;
// 	ob2.in(ob1);
// 	ob2.out(ob1);
// 	return 0;
// }
// ----------------------------------------------------------------------------------------

// Swaping the private data of class using friend function

// #include <iostream>
// #include <string.h>
// using namespace std;
// class B;
// class A
// {
// private:
// 	int a;
// public:
// 	void in()
// 	{
// 		cout << "Enter the val of a: ";
// 		cin >> a;
// 	}
// 	void out()
// 	{
// 		cout << endl << "a: " << a;
// 	}
// 	friend void swapdata(A &a1, B &b1);
// };
// class B
// {
// private:
// 	int b;
// public:
// 	void input()
// 	{
// 		cout << "Enter the val of b: ";
// 		cin >> b;
// 	}
// 	void output()
// 	{
// 		cout << endl
// 			 << "b: " << b;
// 	}
// 	friend void swapdata(A &a1, B &b1);
// };
// void swapdata(A &a1, B &b1)
// {
// 	int tmp;
// 	tmp = a1.a;
// 	a1.a = b1.b;
// 	b1.b = tmp;
// }
// int main()
// {
// 	A ob1;
// 	B ob2;

// 	ob1.in();
// 	ob2.input();

// 	cout << endl << "---------- Before Swap -------------";
// 	ob1.out();
// 	ob2.output();

// 	swapdata(ob1, ob2);

// 	cout << endl << "---------- After Swap -------------";
// 	ob1.out();
// 	ob2.output();

// 	return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------

//  Constructor and Destructor  ✅

// 		Constructor: These are special public member function of class, having name same as that of
// 			     class in which it is declared, don't have any return type, not even void and 
// 			     invoked automatically when object of class is created.

//               There are different types of constructors, which are as listed below
// 				- Default Constructor
// 				- Parameterised Constructor
// 				- Dynamic Constructor
// 				- copy constructor

// 	// Destructors: It is same as that of default constructor, but preceeded with ~(tidel) sign, and
// 			invoked automatically, when object moves out of scope.

// 			- note carefuly that, it will not collecting any argument.
// 			- It is actually used to release the resources hold by the object. means it will be
// 			  used to perform the last operation on the object like file closeing, just before
// 			  becoming inaccessible

			//   becoming inaccessible.

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Sample
// {
// 	int data;
//     public:
// 	Sample()
// 	{
// 		cout<<"\n Object is created";
// 		data=100;
// 	}
// 	~Sample()
// 	{
// 		cout<<"\n Object is Deleted";
// 	}
// 	void indata()
// 	{
// 		cout<<endl<<"Enter the data: ";
// 		cin>>data;
// 	}
// 	void outdata()
// 	{
// 		cout<<"Data is: "<<data;
// 	}
// };
// int main()
// {
// 	Sample ob1;

// 	cout<<endl<<"Before input: ";
//     	cout<<endl<<"For Ob1: ";
// 	ob1.outdata();

// 	ob1.indata();
//     	cout<<endl<<"For Ob1: ";
// 	ob1.outdata();

// 	{
// 	    Sample ob2;
// 	    cout<<endl<<"For Ob2: ";
// 	    ob2.outdata();
// 	}
//     	cout<<endl<<"Main ends";
// 	return 0;
// }

// 
// ---------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;
// class demo
// {
// 	int a;
// 	public: 
// 	   demo();
// 	   void input()
// 	   {
// 		cout<<"Enter the value of data: ";
// 		cin>>a;
// 	   }
// 	   void output()
// 	   {
// 		cout<<endl<<"a is :"<<a;
// 	   }
// }; 
// demo::demo()
// {
// 	a=10;
// 	cout<<"in defult const";
// };
// int main()
// {
// 	demo obj;

// 	obj.output();

// 	obj.input();
// 	obj.output();

// 	return 0;
// }

// -----------------------------------------------------------------------
// - Parameterised Constructor : Constructor which collects an arguments.

// #include<iostream>
// using namespace std;
// class Demo
// {
//     private:
// 	int x;
// 	float y;
// 	double z;
//     public:
// 	Demo()// Default constructor
// 	{
// 		cout<<endl<<"In Default constructor";
// 		x=1;
// 		y=2.3;
// 		z=56.341;
// 	}
// 	Demo(int t)//Parameterised constructor
// 	{
// 	    cout<<endl<<"In Parameterised constructor-1";
// 	    x=t;
// 	    y=t;
// 	    z=t;
// 	}
// 	Demo(int a1, float a2, double a3) // Parameterised constructor
// 	{
// 	    cout<<endl<<"In Parameterised constructor-2";
// 	    x=a1;
// 	    y=a2;
// 	    z=a3;
// 	}
// 	void out()
// 	{
// 		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
// 	}
// };
// int main()
// {
// 	Demo ob1;
// 	ob1.out();

// 	int a=11;
// 	float b=5.3;
// 	double c=34.23;
// 	Demo ob2(a,b,c); // implicit call
// 	ob2.out();

// 	Demo ob3=Demo(a,b,c); // explicit call
// 	ob3.out();
	
// 	Demo ob4(10);
// 	ob4.out();

// 	return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------
// Dynamic Constructor: Used to allocated the memory for class member.

// #include <iostream>
// #include <iomanip>
// using namespace std;

// class Demo
// {
//     private:
// 	int *p;
// 	int ec;
//     public:
// 	Demo() // dynamic constructor
// 	{
// 		p=new int[5];
// 		ec=5;
// 		cout<<endl<<"Enter 5 Nos: ";
// 		for(int i=0;i<5;i++)
// 		{
// 		    cin>>*(p+i);
// 		}
// 	}
// 	Demo(int cnt) // dynamic constructor
// 	{
// 		p=new int[cnt];
// 		ec=cnt;
// 		cout<<endl<<"Enter "<<cnt<<" Nos: ";
// 		for(int i=0;i<ec;i++)
// 		{
// 		    cin>>*(p+i);
// 		}
// 	}
// 	void out()
// 	{
// 		cout<<endl<<"Elements are: ";
// 		for(int i=0;i<ec;i++)
// 		{
// 			cout<<setw(5)<<*(p+i);
// 		}
// 	}
// };

// int main()
// {
// 	Demo ob1;
// 	ob1.out();

// 	Demo ob2(7);
// 	ob2.out();
	
// 	return 0;
// }

// //---------------------------------------------------------------------------------------------------------
	//  copy constructor

// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Demo
// {
//     private:
// 	int x;
// 	float y;
// 	double z;
//     public:
// 	Demo()	// Default constructor
// 	{
// 		cout<<endl<<"In Default constructor";
// 		x=1;
// 		y=2.3;
// 		z=56.341;
// 	}
// 	Demo(int a1, float a2, double a3) // Parameterized constructor
// 	{
// 		cout<<endl<<"In Parameterized constructor";
// 	    x=a1;
// 	    y=a2;
// 	    z=a3;
// 	}
// 	Demo(Demo &t) // Copy constructor
// 	{
// 	    cout<<endl<<"In Copy constructor";
// 	    x=t.x;
// 	    y=t.y;
// 	    z=t.z;
// 	}
// 	void out()
// 	{
// 		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
// 	}
// };
// int main()
// {
// 	Demo ob1;
// 	ob1.out();

// 	Demo ob2(11,2.3,12.45); 
// 	ob2.out();
	
// 	Demo ob4(ob2);
// 	ob4.out();

// 	return 0;
// }

// //-----------------------------------------------------------------------------------------------


	// Passing default arguments to constructor:
// 	#include<iostream>
// 	#include<string>
// 	using namespace std;
// class Time
// {
//     private:
// 	int hours;
// 	int mins;
// 	int secs;
//     public:
// 	Time()
// 	{
// 		hours=0;
// 		mins=0;
// 		secs=0;
// 	}
// 	Time(int a)
// 	{
// 		hours=a;
// 		mins=a;
// 		secs=a;
// 	}
// 	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
// 	{
// 		hours=a1;
// 		mins=a2;
// 		secs=a3;
// 	}
// 	void showtime()
// 	{
// 		cout<<endl<<"Time is: "<<hours<<":"<<mins<<":"<<secs;
// 	}
// }; 
// int main()
// {
// 	Time t1;
// 	t1.showtime();

// 	Time t2(5);
// 	t2.showtime();

// 	Time t3(2,30,50);
// 	t3.showtime();

// 	Time t4(2,30);
// 	t4.showtime();

// 	return 0;
// }

// -------------------------------------------------------------------------------------------------------------------


// Constructor Overloading: It simply refers to defining multiple constructors in a same class,
// 				    but differ in the signature(prototype).

// 	e.g. It above example, we have decl. 3 different constructors as shown


// class Time
// {
//     private:
// 	int hours;
// 	int mins;
// 	int secs;
//     public:
// 	Time()
// 	{
// 		hours=0;
// 		mins=0;
// 		secs=0;
// 	}
// 	Time(int a)
// 	{
// 		hours=a;
// 		mins=a;
// 		secs=a;
// 	}
// 	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
// 	{
// 		hours=a1;
// 		mins=a2;
// 		secs=a3;
// 	}	
// 	.......
// }; 

// ---------------------------------------------------------------------------------------

// Destructors: It is same as that of default constructor, but preceeded with ~(tidel) sign, and
// 			invoked automatically, when object moves out of scope.

// 			- note carefuly that, it will not collecting any argument.
// 			- It is actually used to release the resources hold by the object. means it will be
// 			  used to perform the last operation on the object like file closeing, just before
// 			  becoming inaccessible.
// #include<iostream>
// #include<string>
// using namespace std;
// class Demo
// {
//     public:
// 	Demo()
// 	{
// 		cout<<endl<<"Object is Created";
// 	}
// 	~Demo()
// 	{
// 		cout<<endl<<"Object is Deleted";
// 	}
// };
// int main()
// {
// 	demo ob1;
// 	return 0;
// }

