//Enter runs scored by 7 players in diffrent matches display man  of the series
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ap[7],pc[7],i,j,tot=0, max=0,tmp,k=0,manofseries=0;

    printf("Player Details:\n");
    for(i=0;i<7;i++)
    {
        printf("%d player :\n",i+1);
        printf("Enter the matches count:\n");
        scanf("%d",&pc[i]);
        ap[i]=(int*)malloc(pc[i]*sizeof(int));

        printf("Enter %d player match score:\n",i+1);
        for(j=0;j<pc[i];j++)
        {
            scanf("%d",*(ap+i)+j);

        }
    }

     for(i=0;i<7;i++)
    {
        tot=0;
        for(j=0;j<pc[i];j++)
        {
             tot=tot+(*(*(ap+i)+j));
        if(tot>max)
        {
            tmp=tot;
            tot=max;
            max=tmp;
           manofseries=i;
        }
        }


    }

    printf("\nmax : %d",max);
    printf("manofseries is : %d",manofseries+1);

}
