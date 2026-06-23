	- Basic Program Structure
	 security to data.

	 

		- pre-processor directives
		- Namespace decl.
		- class decl.
		- functions and comments
		- main() function


	- C++ Tokens: these are smllest possible units in the program, which acts as building block for the instructions.
		The C++ tokens are
			- Constants and literals
			- identifiers
			- comments
			- keywords
			- punctuators
			- preprocessor directives
			- operators
	

	Data types in C++: Data type is tool, which is used at the time of memory allocation to know about the
			   memory need. It is represented using the keyword, that keyword in used in the decl. instruction,
			   in function to mention the argument type and return type, in pointer and arrays for defining the type,
			   in the type casting, and in the structure to mention the member type 

			C++ Data Types
					     |
		----------------------------------------------------------------------------
		|					|				    |
	Derived Data Types			Built-in Data types		 User-defined Data types
	   |						|				      	                           |			
	- Array						|					                       - structure
	- pointer			--------------------------------------		        	- union
	- function			               |		  |		       |		        - enum
	- reference		 Integral data types   void data type    Floating data types	- class
	- auto				 |		     |			|
	- decltype		------------------------    void(NA)		- float(4)
			        	|	   |	      |				        - double(8)
			       bool(1)   int(4)	      char(1)			    - long double (8/12/16)
					       short(2)         wchar_t (2 or 4) 
					       long(4/8)        char8_t (1)	
					      long long(8)     char16_t (2)
						                 char32_t (4)






💡xConstants and Literals: 
		
		- literals: These are the fixed values, which are assigned to variable.
		
			45 - integer literal		'a' - character literal

		- constant: These are the named values defined using identifier, which remains unchanged throurhout
			     the program execution. It not possible to change its value. if sameone attempt to change
			      it, compiler will generate an error message.

			There are following ways of defining the constants:

			- Using const Keyword: (C++98)
			- Using enum: (C++98)
			- Using #define Preprocessor Directive: (C++98)
			- Using constexpr Keyword: (C++11)
			- Using using Alias: (C++14)



 Using enum: (C++98)

	enum [<name>]{const1, const2,...,constN};

	e.g.	enum color {red, green, blue, black};		or 	enum {red, green, blue, black}; 



	enum color {RED, GREEN, BLUE, BLACK};	or 	enum {RED, GREEN, BLUE, BLACK};
 
	RED	Equivalent to 0
	GREEN   Equivalent to 1 
	BLUE    Equivalent to 2
	BLACK   Equivalent to 3

 



✅

Unscoped Enum:
// Declaration
enum Color { RED, GREEN, BLUE};
// Usage
Color c = RED;

Scoped Enum:
// Declaration
enum class Fruit {
    APPLE,
    BANANA,
    ORANGE
};
// Usage
Fruit f = Fruit::APPLE;

	// using unscoped 

#include<iostream>
using namespace std;
int main()
{
    enum Color { RED=7, GREEN=20, BLUE};
    enum Ink {BLACK, PINK, YELLOW, RED}; //error: 'RED' conflicts with a previous declaration|

    cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE;
    cout<<endl<<" Colors:"<<Color::RED<<"\t"<<Color::GREEN<<"\t"<<Color::BLUE;

    cout<<endl<<" INK:"<<BLACK<<"\t"<<PINK<<"\t"<<BLUE; // Take the value from 1st enum

    return 0;
}

	// using scoped
#include<iostream>
using namespace std;
int main()
{
    enum class Color {RED=7, GREEN=20, BLUE};
    enum class Ink {BLACK, PINK, YELLOW, RED};

   // cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE; //error: 'RED' was not declared in this scope|
    cout<<endl<<" Colors:"<<(int)Color::RED<<"\t"<<(int)Color::GREEN<<"\t"<<(int)Color::BLUE;

    cout<<endl<<" INK:"<<(int)Ink::BLACK<<"\t"<<(int)Ink::PINK<<"\t"<<(int)Ink::RED;

    return 0;
}







🫡
// Dynamic decl and dynamic init.
    
- Dynamic decl: C++ allows you to decl. variable anywhere in the program,
                just decl. before using it. known as dynamic declaration.
                    
- Dynamic initilization: The them initialization refers to assigining
        the value to variable at the time of memory allocation. if the
        value to which valiable in initialized is decided at runtime.
        such initilization is known as Dynamic initilization.
       



💡
// Using void data type: 

	- we know that, the void data type is used to mention the function returning nothing in response to call.
	  Also when function does no collect any argument, the we use the void 

		i.e.	void show(void){....}

	- The another use of void is to declare the "Generic Pointer".
	  The generic pointer is a pointer which is convertable to any type.
	   
	    eg:-
	  
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



🫡🫡/// Using void data type: 

	- we know that, the void data type is used to mention the function returning nothing in response to call.
	  Also when function does no collect any argument, the we use the void 

		i.e.	void show(void){....}

	- The another use of void is to declare the "Generic Pointer".
	  The generic pointer is a pointer which is convertable to any type.



💡

// Operators in C++: special symbols with well defined meaning, which
		     will be used to process the data, when they are 
		     operated on opearnds.

	- All C operators are valid in C++, and these are

		- Assignment Operators [=]:   							
		- Unary Operators [ - ++ -- (type) sizeof ]:
		- Arithmatic Operators [ + - * / % ]:
		- Relational Operators [ < <= > >= ]:
		- Equality Operators [==, != ]
		- Logical Operators [ && || !]:
		- Conditional Operators [ ? : ]:
		- Bitwise Operators [ & | ^ >> << ]:
		- Special Operators [ , ; . -> &(ampersand) * ]:

	- Additionally C++ provides the following operators.
            
                - :: (scope resolution operator)
                - ::* (pointer to member Declarator)
                - ->* and .* (pointer to member operators)
                - delete (Memory release operator)
                - new (memory allocation operator)
                - endl (Line feed operator)
                - setw (field width operator)
    	




🫡

 - :: (scope resolution operator): 
   The scope resolution operator is used to access the global member always
   from any scope, It will access the global member even from the nested scope.

 // - new (memory allocation operator) and delete (Memory release operator): 

	new - Here is new is keyword, and acts as a memory allocation operator.
	      unlike C, it does require an explicit casting and also no need of
	      byte calculation, it will be done automatically.

		It is alternative to malloc(),calloc() and realloc()

		lets see  how malloc() is used in C

		int *p;
		p=(int*)malloc(cnt*sizeof(int));

		// In C++
		syntax:
			<ptr_variable> = new <data_type>[<cnt>];

		int *p;
		p=new int[cnt];


	delete - Here delete is keyword, and acts as a Memory release operator.
		 it will free/deletes/ releases the memory allocated for pointer variable
		 using new.

			in C:
				int *p;
				p=....
				free(p);

			In C++			

			syntax:	delete <ptr_var>;

				int *p;
				p=....
				delete p;





✅✅//----------------------------------------------------------------------------

	- Different control statements in C++:

		C provides different control statments and all are as it is in C++

							Control statments
							      |
						------------------------------
						       |			      |
					Conditional CS			UnConditional CS
						|				                 |
				-------------------------------		----------------------------------
				    |		 |	       |		       |	   |		       |	  |
			   Decision	     Loop	   Case	       goto      break      continue     return 
			    |		      |		    |	
			- if()		    - for()	  switch()
			- if() else	    - while()
			- Nesting	    - do while()
			- Ladder
 

	conditional control statments: needs the condition for working.

	unconditional control statments: Does not need any condition to work

//-----------------------------------------------------------------------------------------------------------------------

	// Derived Type in C++

	The derived types are as listed below..!!
	
	- Array: 
	- pointer:
	- function:
	- reference:
	- auto
	- decltype


 - Array: collection of elements having same data type, which conti. arranged
	  int the menory.

	- Numeric array: ( same as we have seen in the C)
	- character array: only onr difference and it is

		 Note that character array in C does not consider '\0' as 
		 a part of string, where as in C++ '\0' is considered as a 
		 part of string.

			C   - char s[5]="hello";
			C++ - char s[6]="hello";


 - Pointer: It is used in the dynamic memory allocation to store an address
	    of variable. We may divide the pointer in two different parts.

	- Raw pointer: (Pointer we have seen in the C)
		The basic difference is in steade of malloc() and free(),
		new and delete used for memory allocation release			
	- Smart pointer: Introduced in C++11, so we will see it in same chapter
	

	 Additionally c++ introduced 
            
                - pointer to constant: pointer able to point to any location of 
                                       correct type, but when it is refering, it 
                                       will not allow to change the data from the 
                                       location where it is pointing.
                                       
                - Constant pointer:  It is pointing towards same location. means the        
                                     value of pointer variable(address) can not be changed once
                                     it is initilizsd. you can change the value from 
                                     the location, where it is pointing.


#include<iostream.h>
//using namespace std; (run using onlinegdb TurboC++ Compiler)
int main()
{
    //-------------------- pointer to constant ------------------
    char const *ptr="hello";
    cout<<endl<<"string is: "<<ptr;

    ptr="Good Day";
    cout<<endl<<"string is: "<<ptr;

    // *(ptr+2)='a'; // will generate the error coz it is refered by pointer to constant

    //-------------------- constant pointer  ------------------
    char *const ptr1="how are you";
    cout<<endl<<"string is: "<<ptr1;
    *(ptr1+2)='a';
    cout<<endl<<"now string is: "<<ptr1;

   // ptr1="Bye Bye";   // error due to, you are trying to assign new address to constant pointer
    cout<<endl<<"string is: "<<ptr1;
   //-------------------------------------------------------    
    const char* const ptr2="good day";
    cout<<"\n ptr2 is: "<<ptr2;
    
    // ptr2="see you"; // error: con not modify the const object
    // *(ptr2+2)='a'; // error: con not modify the const object

    return 0;
}




//---------------------------------------------------------------------------------------------

	- Reference: 

		int x=10;	int& y=x; // Here y is alternative name of x, called alise
		int z=x;

			x     y	       z
			 [ 10 ]		[ 10 ]
			
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    x=100;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    y=150;
    cout<<endl<<"x="<<x<<"\t y="<<y;

    return 0;
}


	// let's consider the following program.

/// class by value
 
#include<iostream>
using namespace std;
void swap(int a, int b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
int main()
{
	int x=10,y=12;

	cout<<endl<<"Before swap: x="<<x<<"\t y="<<y;
	swap(x,y);
	cout<<endl<<"After swap: x="<<x<<"\t y="<<y;

	return 0;
}

 /// call by reference - using pointer

#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
	int x=10,y=12;

	cout<<endl<<"Before swap: x="<<x<<"\t y="<<y;
	swap(&x,&y);
	cout<<endl<<"After swap: x="<<x<<"\t y="<<y;

	return 0;
}
//-------------------------------------------------------------------------------------

/// call by reference - using reference variable
#include<iostream>
using namespace std;
void swap(int& a, int& b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
int main()
{
	int x=10,y=12;

	cout<<endl<<"Before swap: x="<<x<<"\t y="<<y;
	swap(x,y);
	cout<<endl<<"After swap: x="<<x<<"\t y="<<y;

	return 0;
}




--------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------- Function in C++: -----------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
   Note: the function we have seen in C, is as it is in C++. Additionally the C++ function having
	      following features.

	
	Def: Group/Collection of instructions designed to perform the specific task.
	There are 3 different steps 
	
	- decleration
	- calling
	- definitation

	consider the simple add() function,

	dec: 
		int add(int, int);

	def:
		int add(int x, int y)
		{
			int t=x+y;
			return t;
		}

	call:
		int ans=add(a,b);


Lets see,





💡✔️

// Inline Function: 

	It is simple function, decl. as inline using inline keyword. when any function decl. as inline
	the function call is replaced with body of function. means the it will avoid the push, pop and 
	register copy operations.

	Note that it is request to compiler, if that function is complex then it will execute as a normal
	function eventhough it is decl. as inline.

	There are some rules for inline
	- It must be expanded within one or two lines.
	- It must not contain, any control statement or switch.
	- static function can not be decl as inline.
	- vitual function can not be decl. as inline.
	- It can not be recursive.


inline int squre(int t)
{
	return (t*t);
}

int main()
{
	int no,ans;
	cout<<endl<<"Enter any number: ";
	cin>>no;
	ans=squre(no); 
	cout<<endl<<"Squre of "<<no<<" is "<<ans;
	return 0;
}



🫡👍
	// Function Overloading: 

	C does not allows you to wrire a function with same name in a single program. but in C++ it is allowed.
	But condition is that all these functions having same name must differ in terms of type of arguments
	passed, sequence in which they collected and number of arguments. 

	If program contains multiple functions having same name and they differ in terms of type, sequence
	and count then it is known as function overloading. Note that returning type does not play any role in it.

	Again note one more thing by defining or after assigning the default argument, if compiler finds multiple
	copies with same signature/prototype it will generate an error message called ambigious error.
	


#include <iostream>
using namespace std;
void add(int a, int b, int c)
{
	cout<<endl<<"Addition 1 is: "<<(a+b+c);
}
void add(float a, float b)
{
	cout<<endl<<"Addition 2 is: "<<(a+b);
}

int main()
{
	int x,y;
	cout<<endl<<"Enter two int values: ";
	cin>>x>>y;
	add(x,y); // x and y is promoted to float

	int z;
	cout<<endl<<"Enter a single int value: ";
	cin>>z;
	add(x,y,z);
		
	float p,q;
	cout<<endl<<"Enter two float values: ";
	cin>>p>>q;
	add(p,q);
	
	return 0;
}

//--------------------------------------------------------------------------------------------------

Again we have to see different functions listed below, after knowing the class and object concept.

- static functions:
- friend function:
- virtual functions:






class and Object
	=================

	we have seen different data types in C and C++, and we know that the basic aim of any
	data type is to allocate the memory.

	we used built-in data types(char,int,float and double), derived data types(array, 
	pointer), and userdefined data types(structure, union and enum) to allocate the memory.

	These data types used in the decl. instruction to allocate the memory, which will 
	creates the data structure, which is used to represent the data. The data represented
	using above data structures can be accessed using any function defined within the same
	program. Means the data is public in nature, and as the data is public, it is less
	secure.

	To attend the data security C++ introduced a concept of class. It is user defined data
	type, which will create a data structure and when that data structure is used to
	represent data within memory, it will not allow to access the data members using dot
	operator directly like a structure, means bydefault the data represented using class
	is private in nature, and this limited accessibility provides the security to data.

	lets see with the help of example,

	// we have store the information of bank account

	// lets use the structure








// important Pilars of OOP:


	1. class: It is just templete which is used to characterize the object.
		 It defines the data and code to manipulate that data. It defines 3 different
		 sections (public, protected and private). 
		 In other words, It is specification(collection of rules) or blueprint which is implemented
		 while creating the object.
		Note that the private members are not accessible using . operator directly from outside
		of class, and public member can be accessed.

		syntax:
		class <cls_nm>
		{
			private:
				<data_members>;
				<member_functions>(){};
			protected:
				<data_members>;
				<member_functions>(){};
			public:
				<data_members>;
				<member_functions>(){};
		};
		
		e.g.
		class student
		{
		      private:       
			char nm[40];
			int rno;
			int age;
			float per;
		      public:
			void input(){ ... }
			void display() {...}
		};


	2. Object:
		  In simple terms, " It is variable of class type". or it is instance of class. Basically it is 
		  runtime entity in which entire program is divided. When it gains the memory space, note that 
		  it contain data and code to manuplate that data, which is divied into private, 
		  protected and public section, from which the private is not accessible to using
		  dot operator directly, and public members of class can be accessed using the 
		  . operator rom outside of class
		
		 Basically it is actual implementation of specifications defined using class.

		syntax:
			<class_nm> <obj_nm>;
			e.g.
				student s;

		s
		________________________________
		|private:			|
		|				|
		|   nm    rno    age   per	|
		|   [ ]    []    []     []	|
		|				|
		|				|
		|				|
		|__________________| ^ |________|
		|public:	     |		|
		|				|		
		| void input(){.....}		|
		| void display(){.....}		|
		|				|
		|				|
		|__________________| ^ |________|
				     |	


	3. data hiding: The private data of class is not accessible directly using the dot
			operator, means that data is get hided from outside world, which is
			known as data hiding.  
				
			The Data Hiding provides the security to data.

	4. Encapsulation: Wrapping up of data members and member functions together under
			  single unit is known as encapsulation. 

			Here in class the data member and member functions are encapsulated together.
				
	5. Abstraction: In simple words "Without knowing too much about it"
			It is an art of defining the new type(class) without including its background details.

			here in case of class and object, we dont think about the amount of
			memory as well as its representation in the memory(memory map), means
			we are abstract about it.

			The data types which supports abstraction known as Abstract Data Types (ADT)

//=========================================================================================================

	// Create the class student and input/display the info of two students.

		s1		s2
		[ ]		[ ]

		
		________________________________
		|private:		             	|
		|				                |
		|   nm    rno    age   per	    |
		|   [ ]    []    []     []	    |
		|                               |
		|			                  	|
		|				                |
		|__________________| ^ |________|
		|public:	           |		|
		|				                 |		
		| void input(){.....}	     	|
		| void display(){.....}	       	|
		|				                |
		|				                |
		|__________________| ^ |________|
				             |	
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
		cout<<endl<<"Student Name: "<<nm<<"\t Age: "<<age<<"\t RNO: "<<rno<<"\t Percentage: "<<per;
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

// ----------------------------------------
 Defining member function outside of class

	In C++, you are allowed to define the member functuin outside of class with out changine the
	basic meaning. In such case same function must be decl. within class.

	def. syntax:

		<ret_type> <class_nm>::<function_nm>(<argu_if_any>)
		{
			------------------;
			------------------;
			------------------;
		}

		// Array of objects

		iar
		 [] [] [] [] [] [] [] [] []

		 // pointer to objects

		*p
		 [] -------> [] [] [] [] [] [] [] []


//  --------------------------------------------------------------------------------------
		
	// Friend Function

		- outside function as a friend of class
		- Member function of one class as a friend of another
		- friend class - all member functions of one class as a friend of another class



// ------------------------------------------------------------------------------------------------------

	Constructor and Destructor

		Constructor: These are special public member function of class, having name same as that of
			     class in which it is declared, don't have any return type, not even void and 
			     invoked automatically when object of class is created.

			There are different types of constructors, which are as listed below
				- Default Constructor
				- Parameterised Constructor
				- Dynamic Constructor
				- copy constructor


	// Destructors: It is same as that of default constructor, but preceeded with ~(tidel) sign, and
			invoked automatically, when object moves out of scope.

			- note carefuly that, it will not collecting any argument.
			- It is actually used to release the resources hold by the object. means it will be
			  used to perform the last operation on the object like file closeing, just before
			  becoming inaccessible.'
			  
			  	// Lets see the different types of constructor


	- Default Constructor: It will not collect any argument.
class Demo
{
	int x;
    public:
	Demo() // Default constructor
	{
		x=10;
		cout<<"In Default Constructor";
	}
	void input()
	{
		cout<<endl<<"\n Enter the data: ";
		cin>>x;
	}
	void output()
	{
		cout<<endl<<"x is: "<<x;
	}
}
int main()
{
	Demo ob;

	ob.output();

	ob.input();
	ob.output();

	return 0;
}



// - Parameterised Constructor : Constructor which collects an arguments.

#include<iostream>
using namespace std;
class Demo
{
    private:
	int x;
	float y;
	double z;
    public:
	Demo()// Default constructor
	{
		cout<<endl<<"In Default constructor";
		x=1;
		y=2.3;
		z=56.341;
	}
	Demo(int t)//Parameterised constructor
	{
	    cout<<endl<<"In Parameterised constructor-1";
	    x=t;
	    y=t;
	    z=t;
	}
	Demo(int a1, float a2, double a3) // Parameterised constructor
	{
	    cout<<endl<<"In Parameterised constructor-2";
	    x=a1;
	    y=a2;
	    z=a3;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Demo ob1;
	ob1.out();

	int a=11;
	float b=5.3;
	double c=34.23;
	Demo ob2(a,b,c); // implicit call
	ob2.out();

	Demo ob3=Demo(a,b,c); // explicit call
	ob3.out();
	
	Demo ob4(10);
	ob4.out();

	return 0;
}


// Dynamic Constructor: Used to allocated the memory for class member.

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    private:
	int *p;
	int ec;
    public:
	Demo() // dynamic constructor
	{
		p=new int[5];
		ec=5;
		cout<<endl<<"Enter 5 Nos: ";
		for(int i=0;i<5;i++)
		{
		    cin>>*(p+i);
		}
	}
	Demo(int cnt) // dynamic constructor
	{
		p=new int[cnt];
		ec=cnt;
		cout<<endl<<"Enter "<<cnt<<" Nos: ";
		for(int i=0;i<ec;i++)
		{
		    cin>>*(p+i);
		}
	}
	void out()
	{
		cout<<endl<<"Elements are: ";
		for(int i=0;i<ec;i++)
		{
			cout<<setw(5)<<*(p+i);
		}
	}
};

int main()
{
	Demo ob1;
	ob1.out();

	Demo ob2(7);
	ob2.out();
	
	return 0;
}

// --------------------------------------


	//  copy constructor

#include <iostream>
#include <iomanip>
using namespace std;
class Demo
{
    private:
	int x;
	float y;
	double z;
    public:
	Demo()	// Default constructor
	{
		cout<<endl<<"In Default constructor";
		x=1;
		y=2.3;
		z=56.341;
	}
	Demo(int a1, float a2, double a3) // Parameterized constructor
	{
		cout<<endl<<"In Parameterized constructor";
	    x=a1;
	    y=a2;
	    z=a3;
	}
	Demo(Demo &t) // Copy constructor
	{
	    cout<<endl<<"In Copy constructor";
	    x=t.x;
	    y=t.y;
	    z=t.z;
	}
	void out()
	{
		cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
	}
};
int main()
{
	Demo ob1;
	ob1.out();

	Demo ob2(11,2.3,12.45); 
	ob2.out();
	
	Demo ob4(ob2);
	ob4.out();

	return 0;
}

// ------------------------------------------------------


//-----------------------------------------------------------------------------------------------

	// Passing default arguments to constructor:

class Time
{
    private:
	int hours;
	int mins;
	int secs;
    public:
	Time()
	{
		hours=0;
		mins=0;
		secs=0;
	}
	Time(int a)
	{
		hours=a;
		mins=a;
		secs=a;
	}
	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
	{
		hours=a1;
		mins=a2;
		secs=a3;
	}
	void showtime()
	{
		cout<<endl<<"Time is: "<<hours<<":"<<mins<<":"<<secs;
	}
}; 
int main()
{
	Time t1;
	t1.showtime();

	Time t2(5);
	t2.showtime();

	Time t3(2,30,50);
	t3.showtime();

	Time t4(2,30);
	t4.showtime();

	return 0;
}

// ----------------------------



	// Constructor Overloading: It simply refers to defining multiple constructors in a same class,
				    but differ in the signature(prototype).

	e.g. It above example, we have decl. 3 different constructors as shown


class Time
{
    private:
	int hours;
	int mins;
	int secs;
    public:
	Time()
	{
		hours=0;
		mins=0;
		secs=0;
	}
	Time(int a)
	{
		hours=a;
		mins=a;
		secs=a;
	}
	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
	{
		hours=a1;
		mins=a2;
		secs=a3;
	}	
	.......
}; 


// ----------------------------------------------------------------------

	// Destructors: It is same as that of default constructor, but preceeded with ~(tidel) sign, and
			invoked automatically, when object moves out of scope.

			- note carefuly that, it will not collecting any argument.
			- It is actually used to release the resources hold by the object. means it will be
			  used to perform the last operation on the object like file closeing, just before
			  becoming inaccessible.

class Demo
{
    public:
	Demo()
	{
		cout<<endl<<"Object is Created";
	}
	~Demo()
	{
		cout<<endl<<"Object is Deleted";
	}
};
int main()
{
	demo ob1;
	return 0;
}

//---------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

class Demo
{
    private:
	int *p;
	int ec;
    public:
	Demo() // dynamic constructor
	{
		p=new int[5];
		ec=5;
		cout<<endl<<"Enter 5 Nos: ";
		for(int i=0;i<5;i++)
		{
		    cin>>*(p+i);
		}
	}
	void out()
	{
		cout<<endl<<"Elements are: ";
		for(int i=0;i<ec;i++)
		{
			cout<<setw(5)<<*(p+i);
		}
	}
	~Demo()
	{
	    delete p;
	}
};

int main()
{
    {
	Demo ob1;
    	ob1.out();
    }
	//......
	return 0;
}
// ------------------------------------------


//---------------------------------------------------------------------------------------------------------------------- 

		---------------------------- Operator Overloading ---------------------------------

//---------------------------------------------------------------------------------------------

		// Operator Overloading and Type Conversion

	In this topic, we have to see another special function which will be called when
	we operate an operator on the object, In that case type definition of object must
	contain that special function.

	That function called special coz its name starts with operator keyword and ends with
	the operator symbol to which you want to assign an additional meaning.

	i.e.
		<returning_type> operator<op>(<argument_list>)
		{
			-------------------;
			-------------------;
			-------------------;
			-------------------;
		}

 lets see simple example