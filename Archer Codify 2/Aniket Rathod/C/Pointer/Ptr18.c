// Array of pointer
// Enter runs score by 7 players in different matches and display man of the series.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p[7];
    int mc[7],i,j,k,maxrun;
    int mr[7];
    
    
    printf("\n Enter details of 7 players");
        for(i=0;i<7;i++)
        {
            printf("\n For Player %d",i+1);
            printf("\n Enter the no matches played : ");
            scanf("%d",&mc[i]);
            p[i]=(int*)malloc(mc[i]*sizeof(int));
            printf("\n Enter runs obtained in %d match: ",j+1);
            for(j=0;j<mc[i];j++)
            {
                printf("\n Runs of match %d: ",j+1);
                scanf("%d",*(p+i)+j);
            }
        }
        
    for(k=0;k<7;k++)
    {
        for(i=0;i<7;i++)
        {
            maxrun=0;
            for(j=0;j<mc[i];j++)
            {
                maxrun=maxrun+(((p+i)+j));
            }
            mr[i]=maxrun;
        }
    }
    maxrun=mr[0];
    for(i=0;i<7;i++)
    {
        if(mr[i]>maxrun)
        {
            maxrun=mr[i];
        }
    }
    for(i=0;i<7;i++)
    {
        if(maxrun==mr[i])
        {
            printf("\n %d player is man of series with %d runs",i+1,maxrun);
        }
    }
    return 0;
}