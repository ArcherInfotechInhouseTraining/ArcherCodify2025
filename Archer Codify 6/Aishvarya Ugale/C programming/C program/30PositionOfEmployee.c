 /* WAP to the position of employee in the company using the salary.


        upto 1K --> Worker

        1K - 3K --> Jr

        3K - 5K --> Sr

        5K - 7K --> Dr

        7K Onward --> CEO

        */

#include<stdio.h>
void main()
{
    int sal;

    printf("Enter Salary : ");
    scanf("%d",&sal);

    if(sal<=1000)
    {
        printf("Worker\n");
    }
    else if (sal>1000 && sal<3000)
    {
        printf("Junior\n");

    }
    else if (sal>3000 && sal<5000)
    {
        printf("Sinior\n");

    }
    else if (sal>5000 && sal<7000)
    {
        printf("Director\n");

    }
    else{
        printf("CEO\n");
    }

}
