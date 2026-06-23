// WAP to input percentage of marks of N students in HSC and display it.

#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *mrk;
    int i,cnt;

    printf("Enter The Student Count :\n");
    scanf("%d",&cnt);

    mrk=malloc(cnt*sizeof(float));

    printf("Enter %d students marks :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%f",&mrk[i]);
    }

    printf(" LIST ");
    for(i=0;i<cnt;i++)
    {
        printf(" \n%d - %f ",(i+1),mrk[i]);
    }

}
