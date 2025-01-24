/*Rhombus Star Pattern
     *****
    *****
   *****
  *****
 *****

 */

#include<stdio.h>
 void main()
{
     int i,j;
     for(i=0;i<4;i++)
     {
         for(j=0;j<8;j++)
         {
             if(j>=4/*Rows*/-(i+1)&&j<=8/*Columns*/-(i+1))//((j>=3&&j<=7)||(j>=2&&j<=6)||(j>=1&&j<=5)||(j>=0&&j<=4))//(
             {
                 printf("*");
             }
             else
            {
                printf(" ");
             }
         }
         printf("\n");
     }
 }
