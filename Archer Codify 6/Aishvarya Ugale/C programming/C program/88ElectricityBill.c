/*Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition: For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/



#include<stdio.h>
void main()
{
    float unit,bill,surcharge;

    printf("Enter Unit Of electricity\n");
    scanf("%f",&unit);

    if(unit>=50)
    {
        bill=bill+(50*0.50);
        unit=unit-50;


        if(unit>=100)
        {
            bill=bill+(100*0.75);
            unit=unit-100;


            if(unit>=100)
            {
                bill=bill+(100*1.20);
                unit=unit-100;


                if(unit>0)
                {
                   bill=bill+(unit*1.50);


                }

            }
            else
                {
                   bill=bill+(unit*1.20);

                }
        }
        else
        {
             bill=bill+(unit*0.75);

        }
    }
    else
    {

         bill=bill+(unit*0.50);


    }

              surcharge= bill + (bill *0.2);
              printf("Amonut Bill is :%f",surcharge);
}
