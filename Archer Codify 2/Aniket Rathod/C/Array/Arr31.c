// WAP to input percentage of marks of 5 students in HSC and display it.
// with Pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *mrk;
    int i,cnt;

    printf("\n Enter the student count: ");
    scanf("%d",&cnt);

    mrk=malloc(cnt*sizeof(float));

    printf("\n Enter the percetage of %d students: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%f",&mrk[i]);
    }

    printf("\n List \n");
    for(i=0;i<cnt;i++)
    {
        printf("\n Studnet %d - %0.2f",i+1,mrk[i]);

    }

    return 0;

}

