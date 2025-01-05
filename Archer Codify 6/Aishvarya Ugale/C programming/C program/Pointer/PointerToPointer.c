//Pointer to pointer
//Enter marks of N students in M subject (M may be different for ever student).

#include<stdio.h>
void main()
{
    int **p,*sub,sc,i,j;

    printf("Enter Student count\n");
    scanf("%d",&sc);

    p = (int**)malloc(sc*sizeof(int*));
    sub = (int*)malloc(sc*sizeof(int));

    printf("Enter detail of %d students\n",sc);
    for(i=0;i<sc;i++)
    {
       printf("\n student %d: ",i+1);
		printf("\n Enter the subject count: ");
       scanf("%d",(sub+i));

       *(p+i)=(int*)malloc(*(sub+i)*sizeof(int));
       printf("Enter the marks of %d students\n",*(sub+i));

       for(j=0;j<*(sub+i);j++)
       {
           printf("\n sub %d: ",j+1);
           scanf("%d",*(p+i)+j);

       }
    }

    printf("Details of %d students \n",sc);
    for(i=0;i<sc;i++)
    {
        printf("\n Student %d: ",i+1);
       for(j=0;j<*(sub+i);j++)
       {
           printf("%7d",*(*(p+i)+j));
       }
       printf("\n");
    }
}
