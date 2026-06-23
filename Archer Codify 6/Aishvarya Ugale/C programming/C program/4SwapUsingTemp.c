 // Write as program to interchange the values of 2 variables

 #include<stdio.h>
 void main()
 {

     int a,b,temp;

     printf("Enter A and B\n");
     scanf("%d%d",&a,&b);

     printf("Before Swapping\n A=%d B=%d\n",a,b);

     temp=a;
     a=b;
     b=temp;
    printf("After Swapping\n A=%d B=%d",a,b);


 }
