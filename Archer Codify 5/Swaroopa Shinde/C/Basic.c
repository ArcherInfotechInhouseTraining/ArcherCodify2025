/*
1.Right Triangle Star Pattern
*
**
***
****
*****

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
*/

//==============================================================================================

//2.Square Star Pattern
/*
*****
*****
*****
*****
*****


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    //int size;
    //printf("Enter size of the square:");
    //scanf("%d",&size);
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf(" *");
        }
        printf("\n");

    }
    return 0;
}
*/

//=============================================================================================

/*
3.Inverted Right Triangle Star
*****
****
***
**
*


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<(5-i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//==============================================================================================

/*4.Hollow Square Star Pattern
*****
* *
* *
* *
*****


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        printf("\n");
        for(j=0;j<=5;j++)
        if(i==0 || j==0 ||i==5 || j==5)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
*/

//==============================================================================================

/*
5.Pyramid Star Pattern
*
***
*****
*******
********


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=0;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//================================================================================================

// 6.Number pattern
/*
1
12
123
1234
12345


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}

*/
//=================================================================================================
/*
7. Number pattern
12345
1234
123
12
1

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/
//=============================================================================================

/*
8.Number pattern
54321
4321
321
21
1


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=j;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
*/

//=================================================================================================

/*
9.Rhombus Star Pattern
*****
*****
*****
*****
*****


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    for(i=5;i>=1;i--)
    {
        for(j=0;j>=i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=5;j++)
        {
            printf("*");
        }
        printf("/n");
    }
    return 0;
}

*/

//==============================================================================================
/*
10.Hollow Rhombus Star Pattern
*****
* *
* *
* *
*****


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf(" ");
        }
        for(j=0;j<=5;j++)
        {
            if(i==0|| i==5|| j==0||j==5)
                printf("*");
        }
        printf(" \n");
    }
    return 0;
}
*/

//=================================================================================================
/*
Number pattern 11
Triangle Easy Number Patterns
1
22
333
4444
55555


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
*/

//==============================================================================================
/*
Number pattern 12
55555
4444
333
22
1


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=5;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

*/

//===============================================================================================

/*
Number pattern 13
12345
2345
345
45
5


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("");
        }
        for(j=i;j<=5;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

*/

//==================================================================================================
/*
Number pattern 14
5
45
345
2345
12345


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("");
        }
        for(j=i;j<=5;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

*/

//=================================================================================================

/*
Number pattern 14
1
21
321
4321
54321

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

*/

//===================================================================================================
/*
Number pattern 15
54321
4321
321
21
1

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

*/

//===================================================================================================
/*
Square number patterns 16
11111
11111
11111
11111
11111
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
*/

//=============================================================================================

//Square number patterns 17
/*
11111
22222
33333
44444
55555


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
*/

//============================================================================================
/*
18

12345
12345
12345
12345
12345

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

//=================================================================================================

/*
Number pattern 19
11111
00000
11111
00000
11111



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("\n 11111");
        }
        else
        {
            printf("\n 00000");
        }

    }
    return 0;
}

*/

//=============================================================================================
/*

Number pattern 20
12345
23456
34567
45678
56789

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf("%d",(i+j));
        }
        printf("\n");
    }
    return 0;
}

*/

//==================================================================================================
/*

Number pattern 21
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25


#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i;
   for(i=1;i<=25;i++)
   {
       printf("%d\n",i);
   }
   return 0;
}

*/

//==================================================================================================
/*
Number pattern 21
12345
23455
34555
45555
55555


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf("%d",i+1);
            }
            else
            {
                printf("%d",j+1);
            }
        }
printf("\n");
    }
    return 0;
}

*/

//==================================================================================================


