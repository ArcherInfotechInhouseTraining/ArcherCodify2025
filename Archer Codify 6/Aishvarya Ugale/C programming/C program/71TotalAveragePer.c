//Write a C program to enter marks of five subjects and calculate total, average and
//percentage.

#include<stdio.h>

void main()
{

    int math,chem,marathi,eng,phy,total,avg,per;

    printf("Enter math marks :\n");
    scanf("%d",&math);

    printf("Enter chem marks :\n");
    scanf("%d",&chem);

    printf("Enter marathi marks :\n");
    scanf("%d",&marathi);

    printf("Enter eng marks :\n");
    scanf("%d",&eng);

    printf("Enter phy marks :\n");
    scanf("%d",&phy);


    total=math+chem+marathi+eng+phy;

    avg=total/5;

    per=(total/500.0)*100;

    printf("Total:%d\n",total);
    printf("avg :%d\n",avg);
    printf("per:%d\n",per);
}
