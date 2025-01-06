
/*
//  ● OneDimensional Array programs-

//  Write a program to print the marks obtained by a student in five tests.


#include<iostream>
using namespace std;

class Student
{
    private:
        float marks;
    public:
        void in()
        {
            cout<<"Enter the marks of student in five tests:";
            cin>>marks;
        }
        void out()
        {
            cout<<marks<<endl;
        }
};
int main()
{
    Student s1[5];

    for(int i=0;i<5;i++)
    {
        s1[i].in();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Student :"<<"\t";
        s1[i].out();
    };

    return 0;
}



//- Write a program to print the average marks obtained by a student in five tests.

#include<iostream>
using namespace std;

class Student
{
    private:
        float marks;
    public:
        void in()
        {
            cout<<"Enter the marks of student in five tests:";
            cin>>marks;
        }
        void out()
        {
            cout<<marks<<endl;
        }
        float average()
        {
            return marks;
        }
};
int main()
{
    Student s1[5];
    float tot;
    float avg;
    for(int i=0;i<5;i++)
    {
        s1[i].in();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<"\t";
        s1[i].out();
    };
    for(int i=0;i<5;i++)
    {
        tot=tot+s1[i].average();
    };

    avg=tot/5;
    cout<<endl<<"The average of marks is:";
    cout<<avg;
    return 0;
}




// Write a program to find the sum of negative and positive integers.

#include <iostream>
using namespace std;
int main()
{
    int no[5];
    int psum=0;
    int nsum=0;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the no."<<(i+1)<<" :";
        cin>>no[i];
    }
    for(int i=0;i<5;i++)
    {
        if(no[i]<0)
        {
            nsum=nsum+no[i];
        }
        else
        {
            psum=psum+no[i];
        }
    }

    cout<<endl<<"You Entered:";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<no[i];
    }
    cout<<endl<<"Sum of positive integers"<<psum;
    cout<<endl<<"Sum of negative integers"<<nsum;

    return 0;

}




// ================= Pointer =======================

// Write a program to find the sum of N numbers in an array.

#include <iostream>
using namespace std;
int main()
{
    int *p;
    int sum = 0;
    int cnt;

    p=new int[cnt];
    cout<<endl<<"Enter the count of number: ";
    cin>>cnt;

    for (int i = 0; i < cnt; i++)
    {
        cout << "Enter the no." << (i + 1) << " :";
        cin >> p[i];
    }
    for (int i = 0; i < cnt; i++)
    {
        sum = sum + p[i];
    }

    cout << endl<< "You Entered:";
    for (int i = 0; i < cnt; i++)
    {
        cout << "\t" << p[i];
    }

    cout << endl<< "Sum of the elements are:" << sum;

    return 0;
}



// - Write a program to find the smallest element in the array.

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int tmp;

    cout<<endl<<"Enter the elements in the array:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }

    //operation.
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<endl<<"sorted elements are: ";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<endl<<"Smallest no. is:"<<arr[0];
    return 0;
};



//- Write a program to find the largest element in the array.

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int tmp;

    cout<<endl<<"Enter the elements in the array:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }

    //operation.
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<endl<<"sorted elements are: ";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<endl<<"Largest no. is:"<<arr[0];
    return 0;
};




//- Write a program to find the 2nd smallest element in the array.

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int tmp;

    cout<<endl<<"Enter the elements in the array:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }

    //operation.
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<endl<<"sorted elements are: ";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<endl<<"Second smallest no. is:"<<arr[1];
    return 0;
};




// - Write a program to find the 2nd largest element in the array.

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int tmp;

    cout<<endl<<"Enter the elements in the array:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }

    //operation.
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<endl<<"sorted elements are: ";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<endl<<"Second largest no. is:"<<arr[1];
    return 0;
};




//- Write a program to Print the Average of Numbers in array at an even position.

#include <iostream>
using namespace std;

int main()
{
    int x[5];
    int avg;

    cout << "Enter the elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << x[i];
    }
    // operation.

    for (int i = 0; i < 5; i = i + 2)
    {
        avg = avg + x[i];
    }

    cout << endl<< "Average is:" << avg;

    return 0;
}





// - Write a program to Print the Average of Numbers in array at an odd position.

#include <iostream>
using namespace std;

int main()
{
    int x[5];
    int avg;

    cout << "Enter the elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << x[i];
    }
    // operation.

    for (int i = 1; i < 5; i = i + 2)
    {
        avg = avg + x[i];
    }

    cout << endl<< "Average is:" << avg;

    return 0;
}




// - Write a program to print array elements in reverse order.


#include <iostream>
using namespace std;

int main()
{
    int x[5];

    cout << "Enter the elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << x[i];
    }
    // Reverse operation way 1.
    cout<<endl<<"Reversed order:";
    for (int i = 1; i <= 5; i++)
    {
        cout<<"\t"<<x[5-i];
    }

    // Reverse operation way 2.
    cout<<endl<<"Reversed order 2nd way:";
    for (int i = 5; i > 0; i--)
    {
        cout<<"\t"<<x[i];
    }

    return 0;
}





// - Write a program to display a list of even and odd numbers separately from an
//   array.

#include <iostream>
using namespace std;

int main()
{
    int x[5];

    cout << "Enter the elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << x[i];
    }

    // operation.

    for (int i = 0; i < 5; i = i + 1)
    {
        if(x[i]%2==0)
        {
            cout<<endl<<"even numbers:"<<"\t"<<x[i];
        }
        else
        {
            cout<<endl<<"odd numbers:"<<"\t"<<x[i];
        }
    }

    return 0;
}



// =========Doubt===========

// - Write a program to print the frequency of all numbers in an array.

#include<iostream>
using namespace std;

int main()
{
    int x[5];
    int count;
    int visited[5];

    cout<<"Enter the elements:";
    for(int i=0;i<5;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<x[i];
    }

    // frequency.

    for(int i=0;i<5;i++)
    {
        if(visited[5]!=1)
        {
            count = 1;
            for(int j=i+1;j<5;j++)
            {
                if(x[i]==x[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
            cout<<endl<<x[i]<<"-> Occurs at"<<count<<"times";
        }
    }

    // Not Working.---------------------------------------------

    //display.
    // cout<<endl<<"Element | Frequency";

    // for(int i;i<5;i++)
    // {
    //     cout<<x[i]<<"Occurs at"<<count<<"times";
    // };

    return 0;
}



=========================================================================



// Write a program to print the most occurring elements.

#include <iostream>
using namespace std;

void repeated_num(int x[],int n)
{
    int max_count=0;
    cout<<endl<<"Most occurred number: ";

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(x[i]==x[j])
            {
                cnt++;
            }
        }

        if(cnt>max_count)
        {
            max_count=cnt;
        }
    }

    // this loop checks that there is more than 1 elements are repeated.
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(x[i]==x[j])
            {
                cnt++;
            }
        }

        if(max_count==cnt)
        {
            cout<<"\t"<<x[i];
        }
    }
}


int main()
{
    int x[100];
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<endl<<"Enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"Original array: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    repeated_num(x,n);

    return 0;
}




===================================================================




// Write a Program to Find missing numbers in an array.

#include<iostream>
using namespace std;

int missing_no(int x[],int n)
{
    int total;

    total=(n)*(n+1)/2;       //Natural no. formula.

    for(int i=0;i<n;i++)
    {
        total=total-x[i];     // Subtract Each Element in the Array from the Total.
    }
    return total;
}

int main()
{
    int x[50];
    int n;
    cout<<endl<<"Enter the number of elements in array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"Original array displayed: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    // missing_no(x,n);         //cout --> function call in cout statement as following.

    cout<<endl<<"Missing element is:";
    cout<<missing_no(x,n);

    return 0;
}





========================================================================


// Write a program to separate even and odd position numbers in an array.

#include<iostream>
using namespace std;

void separate_no(int x[],int n)
{
    // cout<<endl<<"Odd positions Numbers in array: ";
    // for(int i=0;i<n;i=i+2)
    // {
    //     cout<<"\t"<<x[i];
    // }

    // cout<<endl<<"Even positions Numbers in array: ";
    // for(int i=1;i<n;i=i+2)
    // {
    //     cout<<"\t"<<x[i];
    // }

    for(int i=0;i<n;i++)
    {
        if(x[i]%2==1)
        {
            cout<<endl<<"Odd elements are: "<<"\t"<<x[i];
        }
        else
        {
            cout<<endl<<"Even elements are: "<<"\t"<<x[i];
        }
    }
};

int main()
{
    int x[100];
    int n;

    cout<<"Enter the no. of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"Original array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    separate_no(x,n);

    return 0;
}





============================================================================


// Write a program to separate positive and negative numbers in an array.

#include<iostream>
using namespace std;

void sep_posneg(int x[],int n)
{

    cout<<endl<<"positive number: ";
    for(int i=0;i<n;i++)
    {
        if(x[i]>0)
        {
            cout<<"\t"<<x[i];
        }
        // else
        // {
        //     cout<<"\t"<<x[i];
        // }
    };

    cout<<endl<<"Negative number: ";
    for(int i=0;i<n;i++)
    {
        if(x[i]<0)
        {
            cout<<"\t"<<x[i];
        }
    }
}
int main()
{
    int x[40];
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"Original array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    sep_posneg(x,n);

    return 0;
}




=============================================================================



// Write a program to print the least number of occurring elements in an array.
// least frequent occuring no. in array. --> [1,2,1,2,3,4,4]--->3 least frequent.

#include<iostream>
#include<limits.h>
using namespace std;

int least_occuring(int x[],int n)
{
    int mincnt=INT_MAX;          //======= Doubt.==========
    int elementhavingminfreq;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(x[i]==x[j])
            {
                cnt++;
            }
        }

        if(cnt<mincnt)
        {
            mincnt=cnt;
            elementhavingminfreq=x[i];
        }
    }
    return elementhavingminfreq;
}
int main()
{
    int x[20];
    int n;

    cout<<"Enter the count of number: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"Original array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    least_occuring(x,n);
    cout<<endl<<"Element having least count is: "<<least_occuring(x,n);
    return 0;
}




=============================================================================


// - Write a program to insert an element into an array at a specified position.

#include<iostream>
using namespace std;

int* insert_element(int x[],int n,int a,int pos)        //===Doubt====.
{
    cout<<endl<<"Enter the element to be inserted: ";
    cin>>a;
    cout<<endl<<"Enter the location on which the element is inserted: ";
    cin>>pos;

    // increase the size of array by 1;
    n=n+1;

    // shift elements forward.
    for(int i=n;i>=pos;i--)
    {
        x[i]=x[i-1];
    }

    // insert a at the position.
    x[pos-1]=a;


    return x;
}
int main()
{
    int x[100];
    int n;
    int a;
    int pos;

    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"Original array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    insert_element(x,n,a,pos);

    cout<<endl<<"Array after insertion: ";
    for(int i=0;i<n+1;i++)
    {
        cout<<"\t"<<x[i];
    };

    return 0;
}






===========================================================================


// -Write a program to delete a specified integer in an array.

#include <iostream>
using namespace std;

int* delete_element(int x[], int n, int pos)
{

    // for (int i = 0; i<n; i++)
    // {
    //     if(x[i]==pos)
    //     {
    //         for(int j=i;j<n-1;j++)
    //         {
    //             x[j]=x[j+1];
    //         }
    //     }

    // }

    for (int i = pos; i < n; i++)
    {
        x[i] = x[i + 1];
    }

    return x;         // OR-------> return n;
};

int main()
{
    int x[50];
    int n;
    int pos;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cout << endl
         << "Enter the position of deletion: ";
    cin >> pos;

    cout << endl
         << "Original array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << x[i];
    }

    delete_element(x, n, pos);

    cout << endl
         << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << "\t" << x[i];
    }

    return 0;
};







===========================================================================

//- Write a program to print all negative elements in an array

#include<iostream>
using namespace std;

int negative_no(int x[],int n)
{
    cout<<endl<<"Negative nos. in array: ";
    for(int i=0;i<n;i++)
    {
        if(x[i]<0)
        {
            cout<<"\t"<<x[i];
        }
    }

}
int main()
{
    int x[20];
    int n;

    cout<<"Enter the number in the array: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    cout<<endl<<"original array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<x[i];
    }

    negative_no(x,n);

    return 0;

}




==============================================================================

*/

//- Write a Program to Find Union & Intersection of 2 Arrays.









