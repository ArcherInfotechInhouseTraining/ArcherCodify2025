/*#include<stdio.h>
int main()
{
	int* ap[4];
	int sc[4];
	int i,j;
	for(i=0; i<4; i++)
	{
		printf("\n for student: %d",i+1);
		printf("\nenter the subject count:");
		scanf("%d",&sc[i]);

		ap[i]=(int*)malloc(sc[i]*sizeof(int));

		//printf("\n student:",i+1);
		printf("\n marks of the student are:");
		for(j=0; j<sc[i]; j++)
		{
			//printf("\n marks are:%d",j+1);
			scanf("%d",*(ap+i)+j);
		}

	}
	for(i=0; i<4; i++)
	{
		printf("student %d",i+1);
		for(j=0; j<sc[i]; j++)
		{
			printf("\n%8d",*(*(ap+i)+j));
		}
	}
	printf("\n");

	return 0;
}*/

//D array access using pointer notation

/* #include<stdio.h>
 int main()
 {
     int x[3][5];
     int i,j;
     printf("\n array:");
     for(i=0;i<3;i++)
     {
         for(j=0;j<5;j++)
         {
           scanf("%d",*(x+i)+j);
         }
     }
     printf("\n array:");
     for(i=0;i<3;i++)
     {
         for(j=0;j<5;j++)
         {
           printf("%5d",*(*(x+i)+j));
         }

     }
     printf("\n");
     return 0;
 }*/

//
//enter marks of N students in M subjects (M may be different for every student)
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








