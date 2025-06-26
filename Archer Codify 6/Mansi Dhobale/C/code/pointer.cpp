/*//enter marks of N students in M subjects (M may be different for every student)
#include<stdio.h>
int main()
{
	int **p,*sub;
	int i,j,sc;
	printf("\n enter the count:");
	scanf("%d",&sc);

	p=(int**)malloc(sc*sizeof(int*));
	sub=(int*)malloc(sc*sizeof(int));

	printf("\n enter the student details:");
	for(i=0; i<sc; i++)
	{
		printf("\n %d student",i+1);
		printf("\n subject count: ");
		scanf("%d",(sub+i));//2   3

		*(p+i)=(int*)malloc(*(sub+i)*sizeof(int));

		printf("\n enter the marks of the subject:",*(sub+i));
		for(j=0; j<*(sub+i); j++)
		{
			printf("\n subject %d :",j+1);
			scanf("%d",*(p+i)+j);

		}
		
    printf("\n details  of the student:%d",sc);
		for(i=0;i<sc; i++)
		{
			for(j=0; j<*(sub+i); j++) {


				//printf("\n subject: %d",j+1);
				printf("\t %7d ",*(*(p+i)+j));
			}
			printf("\n");
		}
		
		return 0;


	}


		*/



/*//void pointer
#include <stdio.h>
int main()
{
    void *p = NULL; 	//void pointer
    int x=10;
    double db=34.45;

    printf("The size of pointer is:%d\n",sizeof(p));

    p=&x;
    printf("\n value of x is: %d",*(int*)p);

    p=&db;
    printf("\n value of db is: %lf",*(double*)p);
    return 0;
}
*/



/*//wild pointer
#include <stdio.h>
int main()
{
	int *p; 
	if(p ==32)
	{//wild pointer
	printf("\n%d",*p);
	}
	return 0;
}*/

//dangling pointer
int main()
{
    int *p,*q,cnt,i;

	printf("\n Enter the element count: ");
	scanf("%d",&cnt);

	p=(int*)malloc(cnt*sizeof(int));      // allocates the memory for pointer
	q=p;
	printf("\n Enter the %d Nos: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",(p+i));
	}

	printf("\n Elements are: ");
	for(i=0;i<cnt;i++)
	{
		printf("%5d",*(p+i));
	}
        free(p);
        return 0;
}


	






