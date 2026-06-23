// Block Pointer
// Enter marks of N students in 5 subjects


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int (*p)[5];
    int i,j,sc;
    
    printf("\n Enter count of students: ");
    scanf("%d",&sc);
    
    p=(int(*)[])malloc(sc*5*sizeof(int));
    
    printf("\n Enter marks of students: %d",sc);
    
    for(i=0;i<sc;i++)
    {
        printf("\n Student: %d \n",i+1);
        
        for(j=0;j<5;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
    
    printf("\n Details of %d Students: \n",sc);
    for(i=0;i<sc;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",*(*(p+i)+j));
        }
        
        printf("\n");
    }

    return 0;
}