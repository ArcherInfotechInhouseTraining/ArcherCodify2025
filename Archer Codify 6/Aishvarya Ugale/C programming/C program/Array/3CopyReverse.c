/*// WAP to input array of 10 nos and copy it as it is and in reverse manner
	// in another arrays


      nos
	 11      22      33      44      55      66      77      88      99      90

      x
	 11      22      33      44      55      66      77      88      99      90

      y
	 90      99      88      77      66      55      44      33      22      11

	 */

	 #include<stdio.h>
	 void main()
	 {
	     int x[10],y[10],z[10];
	     int i,j;

    printf("Enter 10 Array Elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
     printf(" Array Elements is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",x[i]);
    }
     for(i=0;i<10;i++)
    {
       y[i]=x[i];
    }
     printf(" Copy Elements is:\n");
     for(i=0;i<10;i++)
    {
        printf("%d\n",y[i]);
    }



     for(i=0,j=9;i<10;i++,j--)
    {
        z[i]=y[j];
    }



     printf(" Reverse Elements is:\n");
     for(i=0;i<10;i++)
    {
        printf("%d\n",z[i]);
    }
	 }
