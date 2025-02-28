// WAP to display "good morning Pune"
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Good Morning Pune");
    return 0;
}
*/

//=============================================================================================

// WAP to display "good morning Pune" 10 times
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
for(i=0;i<10;i++)
{
    printf("\n Good Morning Pune");

}
return 0;
}
*/

//====================================================================================================
// WAP to display "good morning Pune" 10 times
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    while(i<10)
    {
        printf("\n Good Morning Pune");
        i++;
    }
    return 0;
}

*/

//=====================================================================================================

//WAP to display "good morning Pune" 10 times using function
/*
#include<stdio.h>
#include<stdlib.h>
void msg();
int main()
{
    printf("\n main starts");
    msg();
    msg();
    msg();
    msg();
    msg();
    msg();
    printf("\n main ends");
}
void msg()
{
    printf("\n Good morning pune");
    return 0;
}
*/

//=====================================================================================

//WAP to display "good morning Pune" 10 times using function
/*
#include<stdio.h>
#include<stdlib.h>
void msg()
{
    printf("\n Good Morning Pune");
    return 0;
}
int main()
{
    printf("\n Main Starts");
    msg();
    msg();
    msg();
    msg();
    msg();
    msg();
    printf("\n Main Ends");
}
*/

//===================================================================================================
/*
#include<stdio.h>
#include<stdlib.h>
//void mumbai();
//void delhi();
void pune();
void pune()
{
    //printf("\n I am from Mumbai");
    //printf("\n I am from delhi");
    printf("\n I am from pune");
}
void delhi();
void delhi()
{
    //printf("\n I am from Mumbai");
    printf("\n I am from delhi");
    //printf("\n I am from pune");
}
void mumbai();
void mumbai()
{
    printf("\n I am from Mumbai");
    //printf("\n I am from delhi");
    //printf("\n I am from pune");
}

int main()
{
    printf("\n main starts");
    //mumbai();
    //delhi();
    pune();
    delhi();
    mumbai();
    printf("\n Main ends");
    return 0;

}
*/

//==============================================================================================

// WAP to add two nos
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,tot=0;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    tot=a+b;
    printf("Addition is %d",tot);
    return 0;
}
*/

//=====================================================================================================

//I] simple function (function without argument without return type)
/*
#include<stdio.h>
#include<stdlib.h>
void add();
int main()
{
   add();
   return 0;
}
void add()
{
    int a,b,tot=0;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    tot=a+b;
    printf("Addition is %d",tot);
}
*/

//===============================================================================================

//II] function with argument without return type
/*
#include<stdio.h>
#include<stdlib.h>
void add(int,int);
int main()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y)
{
    int tot=0;
    tot=x+y;
    printf("Addition is:%d",tot);
}
*/

//=====================================================================================================

//III] function without argument with return type
/*
#include<stdio.h>
#include<stdlib.h>
int add();
int main()
{
	int t;
	t=add();
	printf("\n Addition is %d",t);
	return 0;
}

int add()
{
	int a,b,tot=0;
	printf("\n Enter any two nos: ");
	scanf("%d %d",&a,&b);
	tot=a+b;
	return tot;
}
*/

//====================================================================================================

//IV] function with argument with return type

/*
int add(int,int);
int main()
{
	int a,b,t;
	printf("\n Enter any two nos: ");
	scanf("%d %d",&a,&b);
	t=add(a,b);

	printf("\n Addition is %d",t);
	return 0;
}

int add(int x, int y)
{
	int tot=0;
	tot=x+y;
	return tot;
}
*/

//======================================================================================

// Recursion: calling function from itself.

	// find factorial
/*
	5!=5*4!
	4!=4*3!
	3!=3*2!
	2!=2*1!
	1!=1


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no,ans;
    print
    */
    //===================================================================================

    // passing array as member to function
/*
    #include<stdio.h>
    #include<stdlib.h>
    void incr100(int y[5]);
int main()
{
	int x[]={11,22,33,44,55};
	int i;

	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",x[i]);
	}

	incr100(x);

	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",x[i]);
	}

	return 0;
}

void incr100(int y[5])
{
	int i;
	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		y[i]=y[i]+10;
	}
}
*/

//=========================================================================
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    x=2;y=3;
    printf("%f",pow(x,y));
    return 0;
}
*/

//======================================================================================================
/*
#include<stdio.h>
#include<string.h>
int main()
{
    //char s1,s2,s3;
    char *s1= "Swarupa";
    char *s2= "Swarupa";
    char *s3= "shinde";
    printf( "\n %d",strcmp(s1,s2));
    printf( "\n %d",strcmp(s1,s3));
    return 0;
}
*/

//=========================================================================================================
//use of static
/*

void add(int n)
{
	int tot=0;
	tot=tot+n;
	printf("\n Total: %d",tot);
}
int main()
{
	int x[]={11,22,33,44,55};
	int i;

	printf("\n Array is: ");
	for(i=0;i<5;i++)
	{
		add(x[i]);
	}
	return 0;
}
*/

//=============================================================================================

// array input and display using function

#include<stdio.h>
#include<stdlib.h>
/*
void output(int y[])
void input(int x[])
int main()
{

    int x[i];
    int i;
    output(x);
    input(x);
    return 0;
}
void output( int y[])
{
    int i;
    printf("\n Array is : ");
    for(i=0;i<5;i++)
    {
        printf("%d",y[i]);
    }
    void input(int x[])
    {
        int i;
        printf("Array 5 element are:");
        for(i=0;i<5;i++)
        {
            scanf("%d",&t[i]);
        }
    }
}
*/

//======================================================================================

// passing the pointer structure variables to function

	// Enter the info. of N Books and display the list. (access using array notations)

#include <stdio.h>
struct Book
{
	char name[50];
	int isbn;
	float price;
	int not;
};
int main()
{
	int cnt,i;
	struct Book *bk;
	printf("\n Enter the Book Count: ");
	scanf("%d",&cnt);

	bk=(struct Book*)malloc(cnt*sizeof(struct Book));

	// access using array notations
	for(i=0;i<cnt;i++)
	{
		printf("\n Enter the name, isbn, price and topics for book %d \n",i+1);
		fflush(stdin);
		gets(bk[i].name);
		scanf("%d %f %d",&bk[i].isbn, &bk[i].price, &bk[i].not);
	}

	printf("\n Book List \n");
	for(i=0;i<cnt;i++)
	{
		printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",bk[i].name,bk[i].isbn,bk[i].price,bk[i].not);
	}
	return 0;

}
