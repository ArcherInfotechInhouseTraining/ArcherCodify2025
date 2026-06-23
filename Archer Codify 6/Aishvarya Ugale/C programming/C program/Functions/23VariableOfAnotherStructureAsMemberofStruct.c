
	// variable of another structure as a member of structure

#include <stdio.h>
#include <stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
struct student
{
	int rno;
    struct Date exdt;
	int mrk[3];
	float per;
};

int main()
{
	int i,j,tot;
	struct student s[2];

	printf("\n Enter the student details");
	for(i=0;i<2;i++)
	{
		printf("\n Enter the rno of student %d: ",i+1);
		scanf("%d",&s[i].rno);
		printf("\n Enter the Exam Date: ");
		scanf("%d %d %d",&s[i].exdt.dd, &s[i].exdt.mm, &s[i].exdt.yyyy );
		printf("\n Enter the marks in 3 subjects: ");
		tot=0;
		for(j=0;j<3;j++)
		{
			scanf("%d",&s[i].mrk[j]);
			tot=tot+s[i].mrk[j];
		}
		s[i].per=tot/3.0;
	}
	printf("\n --------- Student Details --------- \n");
	printf("\n Enter the student details");
	for(i=0;i<2;i++)
	{
		printf("\n\n student %d: \nRNO: %d \t Percentage: %0.2f",i+1,s[i].rno,s[i].per);
		printf("\n Exam Date: %d-%d-%d",s[i].exdt.dd, s[i].exdt.mm, s[i].exdt.yyyy);
		printf("\n Marks: ");
		for(j=0;j<3;j++)
		{
			printf("%5d",s[i].mrk[j]);
		}
	}
	return 0;
}
