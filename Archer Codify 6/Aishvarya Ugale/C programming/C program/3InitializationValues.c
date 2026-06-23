
#include<stdio.h>
#include<stdlib.h>
void main()
{

    int a;
    char ch;
    float f;
    double d;
    printf("Enter Integer value \n");
    scanf ("%d",&a);


 printf("Enter character value \n");
 fflush(stdin);//integer value enter kelyavr cursor buffer
            //madhe asto to character value la space consider krun pudhe jato mhnun he use kraych

   scanf("%c",&ch);

    printf("Enter Floating value \n");
    scanf ("%f",&f);


    printf("Enter Double value \n");
    scanf ("%lf",&d);

    printf("Integer value : %d\n",a);
      printf("Character value : %c\n",ch);
        printf("Floating value : %f\n",f);
          printf("Double  value : %lf\n",d);
}
