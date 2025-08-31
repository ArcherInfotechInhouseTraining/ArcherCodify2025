
/*
==============================================================================
==========================    2D- Array    ===================================



// 1.Write a C Program to Read and Print a RxC Matrix, R and C must be input by the
//   User
//   This program will read a two dimensional array (Matrix), number of rows (R) and
//   number of columns (C) will be read through the User.
//   Input : Enter number of Rows :3
//   Enter number of Cols :3
//   Output:Matrix is :
//   1   1   1
//   2   2   2
//   2   3   3


#include<iostream>
using namespace std;

int main()
{
    int x[3][3];

    cout<<"Enter the 3X3 matrix: ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x[i][j];
        }
    };

    cout<<"Array is: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"\t"<<x[i][j];
        }
        cout<<endl;
    }

    return 0;
}



=============================================================================

//  2.Write a C Program to Read a Matrix and find Sum and Product of all elements
//  This program will read a matrix and prints sum and product of all elements of the two
//  dimensional array.
//  Input : Enter number of Rows :3
//  Enter number of Cols :3
//  Output:Matrix is :
//  1   1   1
//  2   2   2
//  3   3   3
//  Sum :18
//  Product: 216



#include<iostream>
using namespace std;

int main()
{
    int x[3][3];
    int sum;

    cout<<"Enter the 3X3 matrix: ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x[i][j];
        }
    };

    cout<<"Array is: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"\t"<<x[i][j];
        }
        cout<<endl;
    }

    // Addition operation:
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+x[i][j];
        }
        cout<<endl;
    }

    // Product operation:
    int product=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            product = product * x[i][j];
        }
    }

    cout<<endl<<"Sum of Array: "<<sum;
    cout<<endl<<"Product of Array: "<<product;

    return 0;
}



=================================================================================





























// 4. Write a C++ Program to Transpose a Matrix
//    This C++ program will read a matrix and print its transpose matrix.

#include <iostream>
using namespace std;

int main()
{
    int x[3][3];

    cout << "Enter the 3X3 matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x[i][j];
        }
    };

    cout << "Array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << x[i][j];
        }
        cout << endl;
    }

    // Transpose of matrix operation.
    cout << endl
         << "Transpose of matrix is: " << endl;

    == == == == == == code remaining == == == == == == =

                                                           return 0;
}



*/

// 3. Write a C++ Program to find Sum of all elements of each row of a matrix
//    This C++ program will read a Matrix (two dimensional arrays) and print the
//    sum of all elements of each row.

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout <<endl<< "Enter the rows: ";
    cin >> rows;

    cout <<endl<< "Enter the columns: ";
    cin >> columns;

    int x[rows][columns];

    // Input.
    cout << "Enter the elements in array: "<<endl;;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> x[rows][columns];
        }
    }

    // Display.
    cout << "Original Array is: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "\t" << x[rows][columns];
        }
        cout << endl;
    }

    // rowsum operation.
    cout << "Rowsum calculation: "<<endl;
    int rowsum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            rowsum = rowsum + x[rows][columns];
        }
        cout << "Sum of rows " << i + 1 << ":" << rowsum << endl;
    }

    return 0;
}
