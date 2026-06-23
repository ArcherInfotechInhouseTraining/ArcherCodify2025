// Array of pointer
// Enter runs score by 7 players in different matches and display man of the series.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p[7];
    int mc[7],runs=0,max_runs=0;
    int man_of_series,p_idx,i,j;
    
    printf("Enter the details of 7 students :");
    
    for(i=0;i<7;i++)
    {
        printf("\n For player %d",i+1);
        printf("\n Enter the match count :");
        scanf("%d",&mc[i]);
        
        p[i] = (int *)malloc(mc[i]*sizeof(int));
        
        runs=0;
        
        for(j=0;j<mc[i];j++)
        {
            printf("\n Enter Match %d Runs : \n",j+1);
            scanf("%d",(*(p+i)+j));
            runs+= *(*(p+i)+j);
        }
        
        if(runs > max_runs)
        {
            max_runs += runs;
            p_idx = i+1;
        }
    }
    
    printf("\n <-----------Players Score Card----------->");
    
    for(i=0;i<7;i++)
    {
        printf("\n Players %d :",i+1);
        runs=0;
        for(j=0;j<mc[i];j++)
        {
            runs += *(*(p+i)+j);
            printf("%4d",(*(*(p+i)+j)));
        }
        
        printf(" ---> Runs %d\n",runs);
    }
    
    printf("\n Man of the Series Player %d with %d Runs ", p_idx,max_runs);
    return 0;
}
