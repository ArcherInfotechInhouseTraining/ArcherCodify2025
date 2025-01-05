 // Using -, ++ -- operators
 #include<stdio.h>

 void main()
 {


	int x=4,y=9,z,a;

	z=-x;
	printf("\n x=%d \t y=%d \t z=%d",x,y,z); // 4 9 -4

	x++;
	--y;
	printf("\n x=%d \t y=%d \t z=%d",x,y,z); // 5 8 -4

	z = ++x + y-- ;
	printf("\n x=%d \t y=%d \t z=%d",x,y,z); // 6  7  14

	a=++x + y-- + (--x);


	printf("\n x=%d \t y=%d \t a=%d",x,y,a);


 }
