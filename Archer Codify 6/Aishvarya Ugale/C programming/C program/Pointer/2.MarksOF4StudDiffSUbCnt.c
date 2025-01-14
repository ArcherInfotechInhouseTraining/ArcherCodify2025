// Enter the marks of 4 students and display them. note that every student may have different
	// subject count


#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ap[4],i,sc[4],j;

    printf("Enter th 4 students Details :\n");
    for(i=0;i<4;i++)
    {
        printf("for student:%d\n",i+1);
        printf("Enter the sub cnt:\n");

            scanf("%d",&sc[i]);// student sub count

       ap[i]=(int*)malloc(sc[i]*sizeof(int));//ap[i] i number ch location mdhe sc[i] ch value yevdhi size yeil
       printf("%d sub score ",i+1);
       for(j=0;j<sc[i];j++)
       {
           scanf("%d",*(ap+i)+j);
       }


    }

    printf("\nList:\n");
   for(i=0;i<4;i++)
      {
          printf("\nfor student = %d \n",i+1);
         for(j=0;j<sc[i];j++)
           {

           printf("%d sub score:",j+1);
           printf("%2d",*(*(ap+i)+j));
           printf("%2d",*(*(ap+i)+j));
            }

}
}
