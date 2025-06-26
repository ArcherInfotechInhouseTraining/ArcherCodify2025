// input and display

#include<stdio.h>

struct student	
{
	int regno;
	int rno;
	char nm[50];
	int age;
	char gen;
	float per;
};

int main()
{
	struct student s1;
	
	printf("\n Enter the regno and rno of student: ");
	scanf("%d %d",&s1.regno, &s1.rno);

	printf("\n Enter the name: ");
	fflush(stdin);
	gets(s1.nm);

	printf("\n Enter the gender, age and percentage: ");
	scanf("%c %d %f",&s1.gen,&s1.age,&s1.per);

	printf("\n Student details: Reg No: %d \t RNO: %d \t Name: %s \t Gender:%c \t age: %d \t Percentage: %0.2f",s1.regno,s1.rno,s1.nm,s1.gen,s1.age,s1.per);

	return 0;
}
