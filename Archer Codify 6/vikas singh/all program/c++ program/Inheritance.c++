// 	// Relationship between Classes - Inheritance and Association

//  Suppose we dec. multiple classes

// i.e.

// 	class A				class B
// 	{				           {
// 		------------;			--------------;
// 		------------;			--------------;
// 		------------;			--------------;
// 		------------;			--------------;
// 	};				                 };

// 	These are individual or independent classes. Now we have see, how the relationship
// 	is formed between two or more classes.

// 	Why to form the relationship between two or more classes:
// 		- Code reusability.
// 		- Cost cutting
// 		- to avoid code redundancy

// 	There are two different ways of forming the relationship between classes

// 	1. Inheritance(IS-A Relationship): Tight coupling (Blood Relation)
// 	2. Association(HAS-A Relationship): Loose coupling

// 	Lets see, Inheritance first,

// 	class A			// parent / base / super
// 	{
// 		....;
// 	};
// 	class B:public A	// child / derived / sub
// 	{
// 		.....;
// 	};

// 	In this case class B having blood relationship with class A, so it will inherit some
// 	properties from class A. Means when we create the object of class B, we will gain the
// 	memory space for both classes.

// 	It is known as IS-A relationship, lets see the example

// 		  class Person					class Animal
// 			|						|
// 		---------------------				--------------------
// 		|	     	    |				|	|	   |
// 	   class Student	class Employee            class Cow  class Dog  class Human

// 	   Student  IS-A Person					Cow   IS-A Animal
// 	   Employee IS-A Person					Dog   IS-A Animal
// 								Human IS-A Animal

// 	Now, lets discuss Association,

// 	class Engine
// 	{
// 	};
// 	class MusicPlayer
// 	{
// 	};
// 	class Car
// 	{
// 		Engine e;
// 		MusicPlayer mp;
// 	};

// 	Car HAS-A Engine
// 	Car HAS-A MusicPlayer

// 	This Association is divided in to two sub types

// 		a.Aggregation
// 		b.Composition

// 	class Teacher
// 	{
// 	};
// 	class Trade
// 	{
// 	};

// 	class College
// 	{
// 		Teacher t1[50];
// 		Trade t2[6];
// 	};

// 	College 	- Container Object
// 	Teacher, Trade  - Content Object

// 	- If Content object having exsistance evenif Container Object not present,
// 	  then such relationship called as Aggregation. where both classes have
// 	  weak bond between each other.

// 	- If Exsistence of Container Object and Content Object strictly dependents
// 	  on each other i.e. Exsistence of any one is useless then it is known as a
// 	  composition. Here both classes forms strong bond between each other.

// 	lets see one another example

// 		        Car
// 			 |
// 		--------------------
// 		|		   |
// 	     Engine		MusicPlayer

// 	Car-Engine 	- forms strong bond - Composition
// 	Car-MusicPlayer	- forms weak Bond   - Aggregation

// 	Composition is also known as PART-OF Relationship.

// 	______________________________________________________
// 	|						                              |
// 	|	Association 				                      |
// 	|    ____________________________________________     |
// 	|    |						                     |     |
// 	|    |  Aggregation			                     |     |
// 	|    |    _________________________________     |     |
// 	|    |    |                               |     |     |
// 	|    |    | Composition			          |     |     |
// 	|    |    |_______________________________|     |     |
// 	|    |__________________________________________|     |
// 	|_____________________________________________________|

//  //----------------------------------------------------------------------------

// 	Now, Lets start the INHERITANCE in Detail..!!

// 	It is act of defining the new class using the pre-defined classes.
//         It will provide the next level of reusability

//     consider the example, in normal case,

//     class employee              class student           class Teacher           class Driver
//     {                           {                       {                       {
//         char name[50];              char name[50];         char name[50];           char name[50];
//         int age;                    int age;                int age;                int age;
//         -----------;                -----------;            -----------;            -----------;
//         -----------;                -----------;            -----------;            -----------;
//         -----------;                -----------;            -----------;            -----------;
//         -----------;                -----------;            -----------;            -----------;
//     };                          };                      };                      };

//   some elements are there in each class, and every class having code related to IO of those
//     member, which is code repetition and can be avoided using the class inheritance as

//     /// syntax of inheritance

//     class <base/super/parent_class>
//     {
//         ........;
//     };
//     class <derived/sub/child_class> : <visibility_Modifier> <base_class_nm>
//     {
//         --------;
//         --------;
//     };

//  e.g.

//         class person
//         {
//             char name[50];
//             int age;
//             --------------;
//             --------------;
//             --------------;
//         };

// class employee:public person    class student:public person     class Teacher:public person        class Driver:public person
// {                               {                               {                                  {
//     -----------;                      -----------;                   -----------;                        -----------;
//     -----------;                      -----------;                   -----------;                        -----------;
//     -----------;                      -----------;                   -----------;                        -----------;
// };                              };                              };                                };

// class person
// {
// 	int uid;
// 	char name[30];
//      public:
// 	void input()
// 	{
// 		cout<<endl<<"Enter the name: ";
// 		cin>>name;
// 		cout<<endl<<"Enter the uid: ";
// 		cin>>uid;
// 	}
// 	void output()
// 	{
// 		cout<<endl<<"Name: "<<name<<"\t UID: "<<uid;
// 	}
// };
// class employee:public person
// {
// 	float sal;
//      public:
// 	void set()
// 	{
// 		cout<<"Enter the salary: ";
// 		cin>>sal;
// 	}
// 	void show()
// 	{
// 		cout<<endl<<"Salary: "<<sal;
// 	}
// };

// int main()
// {
// 	cout<<endl<<"====================="<<endl;
// 	person p;
// 	// ..... able to deal with person info

// 	cout<<endl<<"====================="<<endl;
// 	employee e;
// 	// ..... able to deal with person-employee info

// 	return 0;
// }

// 	This  is the example showing how the relationship is formed and how the clases are
// 	refered when the objects are created.

// ///--------------------------------------------------------------------------------------------

//         /// Types of Inheritance

//             single          Multi-level          hierarchical        Multiple         Hybrid
//           Inheritance       Inheritance           Inheritance       Inheritance     Inheritance

//              [   ] A            [     ]  A             [ ] A           A       B       [ ]A                  A
//                |                   |                    |              [ ]     [ ]      |                   [ ]
//                |                [     ]  B        --------------        |_______|      [ ] B                 |
//                V                   |              |            |             |          |         D     -------------
//              [   ]  B           [     ]  C       [ ]B         [ ]c          [ ]        [ ] C     [ ]    |           |
//                                                   |            |             C          |         |    [ ] B       [ ] C
//                                               ---------      ---------                 [ ] -------|     |___________|
//                                               |        |     |   |    |                 Z                     |
//                                              [ ]      [ ]   [ ] [ ]  [ ]                                     [ ]
//                                               D        E     F   G    H                                       D

//     - Single Inheritance:   One to one relationship, two layers
//     - Multi-level Inheritance: one to one relationship, more than two layers
//     - Hierarchical Inheritance: One to many relationship
//     - Multiple Inheritance: many to one relationship
//     - Hybrid Inheritance: combinations of any two or more inheritance

// ---------------------------------------------------------
#include <iostream>
#include<string>
using namespace std ;
class person
{
    int uid ;
    char name [50];
    public:
    void input ()
    {
        cout<< endl << enter the 
    }
};
