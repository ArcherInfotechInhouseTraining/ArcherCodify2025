#include<stdio.h>

int main()
{
   int platnium_rate = 8000;
   int gold_rate = 1000;
   int silver_rate = 700;
   int amt=0;

   printf("\n Enter a Amount :");
   scanf("%d",&amt);

   int platinum_g =0;
   int gold_gram =0;
   int silver_gram = 0;

   platinum_g = amt/platnium_rate;  
   amt= amt%platnium_rate;

   gold_gram = amt/gold_rate;
   amt = amt%gold_rate;

   silver_gram = amt/silver_rate;
   amt = amt%silver_rate; 


   printf("\n Platinium grams: %d", platinum_g);
   printf("\n gold grams:%d",gold_gram);
   printf("\n silver gram: %d",silver_gram);
   printf("\nRemaining amount: %d", amt); 

   return 0;
}