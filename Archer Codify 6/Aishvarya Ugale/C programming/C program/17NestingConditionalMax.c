  // Nesting of Conditional operator: using the conditional operator with another conditional operator.

    // WAP to find max from any 3 nos


#include<stdio.h>
void main()
{

    int no1,no2,no3,max;
    printf("Enter no1 and no2 and no3\n");
    scanf("%d%d%d",&no1,&no2,&no3);

    (no1>no2)?  (no1>no3)?printf("max: %d",no1): printf("max: %d",no3)  : (no2>no3)?printf("max: %d",no2): printf("max: %d",no3);
}
