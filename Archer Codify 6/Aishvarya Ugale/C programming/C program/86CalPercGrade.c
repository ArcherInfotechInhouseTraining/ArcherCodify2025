/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include<stdio.h>
void main()
{
    int phy,chem,bio,math,comp,per,tot;

    printf("Enter 5 sub Marks:\n");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);

    tot=phy+chem+bio+math+comp;

    per=(tot/500)*100;
    if(per<=100)
    {

    if(per>=90)
    {
        printf("Grade A");

    }
    else if(per>=80)
    {
        printf("Grade B");

    }
     else if(per>=70)
    {
        printf("Grade c");

    }
     else if(per>=60)
    {
        printf("Grade D");

    }
     else if(per>=40)
    {
        printf("Grade F");

    }
     else if(per<40)
    {
        printf("Grade B");

    }
    }

}
