#include<iostream>
using namespace std; //(run using onlinegdb TurboC++ Compiler)
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
//---------------------
