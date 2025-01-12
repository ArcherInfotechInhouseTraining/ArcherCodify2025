// Enter the PCM marks of student and calculate the PCM total and percentage
// when he is pass otherwise just display student is fail.


#include<stdio.h>
void main()
{
    int phy,chem,math,tot=0,per;
    printf("Enter physics marks : ");
    scanf("%d",&phy);
    printf("Enter Chemistry marks : ");
    scanf("%d",&chem);
    printf("Enter Math marks : ");
    scanf("%d",&math);

    tot=phy+chem+math;
    per=tot/3;
    if(per>35)
    {
        printf("Congratulationss!!!\n Percentage : %d",per);
    }
    else{
        printf("Oopss!! You are fail...Trying next time!!");
    }

}
