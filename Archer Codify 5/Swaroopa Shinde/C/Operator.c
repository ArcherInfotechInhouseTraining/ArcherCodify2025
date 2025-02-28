//List of basic Operator Programs
//====================================================================
//=======================================================================
/*
//Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main()
{
 int age=24;
 float pi=3.14;
 char star='*';
 double db=123.445;
 printf("The age is %d",age);
 printf("\n The pi value is %f",pi);
 printf("\n The star is %c",star);
 printf("\n The double value is %lf",db);
 return 0;
}
*/

//========================================================================

/*
//Write a C program to enter two numbers and find their sum.
#include<stdio.h>
int main()
{
    int a=24;
    int b=16;
    int ans;
    printf("The value of a and b is:%d\n %d",a,b);
    ans=a+b;
    printf("\n The ans is %d",ans);
    return 0;
}
*/

//=============================================================================

/*
//Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\n Enter the value of b:");
    scanf("%d",&b);
    ans=a+b;
    printf("\n The Addition is:%d",ans);
    ans=a-b;
    printf("\n The Substraction is:%d",ans);
    ans=a*b;
    printf("\n The Multiplication is:%d",ans);
    ans=a/b;
    printf("\n The Division is:%d",ans);
    ans=a%b;
    printf("\n The modulus is:%d",ans);
    return 0;
}
*/

//=========================================================================

//Write a C program to enter length and breadth of a rectangle and find its perimeter.
/*
#include<stdio.h>
int main()
{
    int l,b,p;
    printf("Enter the length of the rectangle:");
    scanf("%d",&l);
    printf("Enter the Breadth of the rectangle:");
    scanf("%d",&b);
    p=(l+b)*2;
    printf("The perimeter of rectangle is:%d",p);
    return 0;
}
*/

//==========================================================================

/*
//Write a C program to enter length and breadth of a rectangle and find its area
#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the length of rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    area=l*b;
    printf("The area of rectangle is:%d",area);
    return 0;
}
*/

//===============================================================================

/*
//Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
int main()
{
    int r,d,c,a;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    d=2*r;
    printf("\n The diameter of circle is :%d",d);
    c=2*3.14*r;
    printf("\n The circumference of circle is :%d",c);
    a=3.14*r*r;
    printf("\n The area of circle is: %d",a);
    return 0;
}
*/

//===================================================================

/*
//Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include<stdio.h>
int main()
{
     float l,m,k;
     printf("Enter the length in centimeter:");
     scanf("%f",&l);
     l=l/100;
     printf("\n The meter:%f",l);
     l=l*10000;
     printf("\n The kilometer:%f",k);
     return 0;
}
*/

//=====================================================================

/*
//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=((celsius*9)/5)+32;
    printf("The temperature is:%f",fahrenheit);
    return 0;
}
*/

//====================================================================

/*
//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("The value of celsius s:%f",celsius);
    return 0;
}
*/

//==================================================================

/*
//Write a C program to convert days into years, weeks and days.
#include<stdio.h>
int main()
{
    int days,week,year;
    printf("Enter the days:");
    scanf("%d",&days);
    year=(days/365);
    printf("\n The years is:%d",year);
    week=(days%365)/7;
    printf("\n The week is:%d",week);
    days=days-((year*365)+(week*7));
    printf("\n The days is:%d",days);
    return 0;
}
*/

//=====================================================================

/*
//Write a C program to find power of any number x ^ y.
#include<stdio.h>
int main()
{
    int base,exponent,pow;
    printf("Enter the value of base:");
    scanf("%d",&base);
    printf("Enter the value of exponent:");
    scanf("%d",&exponent);
    pow=exponent*base;
    printf("The value of x^y is :%d",pow);
    return 0;
}
*/

//======================================================================================

/*
//Write a C program to enter any number and calculate its square.
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=n*n;
    printf("The square root of number is:%d",r);
    return 0;
}
*/

//==================================================================================
/*
//Write a C program to enter any number and calculate its square root
#include<stdio.h>
int main()
{
    int n,squareRoot;
    printf("Enter the number:");
    scanf("%d",&n);
    squareRoot=sqrt(n);
    printf("The squareroot is %d",squareRoot);
    return 0;
}
*/
//=============================================================================

/*
//Write a C program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first angel:");
    scanf("%d",&a);
    printf("Enter the second angel:");
    scanf("%d",&b);
    c=180-a-b;
    printf("The third angel is:%d",c);
    return 0;

}
*/

//============================================================================
/*
//Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
int main()
{
    int b,h,a;
    printf("Enter the base of the triangle:");
    scanf("%d",&b);
    printf("Enter the height of the triangle:");
    scanf("%d",&h);
    a=0.5*b*h;
    printf("The area of circle is:%d",a);
    return 0;
}
*/

//===================================================================================

/*
//Write a C program to calculate area of an equilateral triangle.
#include<stdio.h>
int main()
{
    int s,a;
    printf("Enter the side:");
    scanf("%d",&s);
    a=0.43*s*s;
    printf("The Area of equilaterial is:%d",a);
    return 0;
}
*/

//========================================================================

/*
//Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    int tot;
    float avg,per;
    printf("Enter the marks of first subject:");
    scanf("%d",&s1);
    printf("\n Enter the marks of second subject:");
    scanf("%d",&s2);
    printf("\n Enter the marks of third subject:");
    scanf("%d",&s3);
    printf("\n Enter the marks of fourth subject:");
    scanf("%d",&s4);
    printf("\n Enter the marks of fifth subject:");
    scanf("%d",&s5);
    tot=(s1+s2+s3+s4+s5);
    printf("\n The total is;%d",tot);
    avg=(tot/5);
    printf("\n The avg is :%f",avg);
    per=(avg*100);
    printf("\n The percentage is :%f",per);
    return 0;
}
*/

//=======================================================================================
/*
//Write a C program to enter P, T, R and calculate Simple Interest
#include<stdio.h>
int main()
{
    float p,t,r,s;
    printf("Enter the value of p:");
    scanf("%f",&p);
    printf("Enter the value of t:");
    scanf("%f",&t);
    printf("Enter the value of r:");
    scanf("%f",&r);
    s=(p*t*r)/100;
    printf("The simple interest is:%f",s);
    return 0;

}
*/
//===========================================================================================

/*
//Write a C program to enter P, T, R and calculate Compound Interest.
#include<stdio.h>
int main()
{
    float p,t,r,ci;
    printf("Enter the value of p:");
    scanf("%f",&p);
    printf("Enter the value of t:");
    scanf("%f",&t);
    printf("Enter the value of r:");
    scanf("%f",&r);
    ci=p(1+r/100)^t;
    printf("The compound interest is:%f",ci);
    return 0;
}

*/

//=====================================================================================
