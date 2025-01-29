// init and display of structure variable

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
	struct student s1={191234353,14,"Aniket Rathod",21,'M',82.75};

	printf("\n Student details: Reg No: %d \t RNO: %d \t Name: %s \t Gender:%c \t age: %d \t Percentage: %0.2f",s1.regno,s1.rno,s1.nm,s1.gen,s1.age,s1.per);

	return 0;
}
