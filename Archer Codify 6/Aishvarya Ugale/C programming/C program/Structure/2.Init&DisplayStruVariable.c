// init and display of structure variable

#include<stdio.h>

struct student
{
    char nm[50];
    int RN;
    int age;
    char gen;
    float per;
};
int main()
{
    struct student s1;

    printf("Enter student name :\n");
    gets(s1.nm);
    printf("Gender:");
    scanf("%c",&s1.gen);
    printf("Enter Age,Roll no,Percentage\n");
    scanf("%d%d%f",&s1.age,&s1.RN,&s1.per);

    printf("Student Details :\n Name:%s\t RollNo:%d \t Age:%d \t Gender:%c \t Percentage:%f",s1.nm,s1.RN,s1.age,s1.gen,s1.per);



}
