/*
#include<stdio.h>
int main()
{
    int x[] = {23,67,33,56,92};

    printf("\n %d", x[0]);
    printf("\n %d",x[2]);
	printf("\n %d",x[3]);
	printf("\n %d",x[4]);

	return 0;
}



// It will become simple using the loop

#include<stdio.h>
int main()
{
	int x[]={23,67,33,56,92};
	int i, pos=0;
	for(i=10;i<15;i++)
	{
		printf("\n %d",x[pos]);
		pos++;
	}
	return 0;
}

// using iterator i as a position indicator


#include <stdio.h>
int main()
{
	int x[5]={23,67,33,56,92};
	int i;
	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		// printf("   %d",x[i]);
		//printf("\t %d",x[i]);
		printf("%6d",x[i]);
	}
	return 0;
}


/// WAP to input and display the array of 7 elements.	

#include <stdio.h>
int main()
{
    // Decl - memory allocation
	int arr[7], i;
	
	// data input
	printf("\n Enter any 7 nos: ");
	for(i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
	}

    // data display
	printf("\n Elements are: ");
	for(i=0;i<7;i++)
	{
		printf("%8d",arr[i]);
	}
	return 0;
}

// Enter any 10 nos and count even and odd nos from it.

#include <stdio.h>
int main()
{
	int arr[10], i, ecnt=0, ocnt=0;
	
	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	// process
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			ecnt++;
		}
		else
		{
			ocnt++;
		}
	}
	printf("\n Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",arr[i]);
	}
	printf("\n Even Count is %d and Odd count is: %d",ecnt,ocnt);
	return 0;
}

	// Enter the 10 nos and display the even and odd list from it.

#include <stdio.h>
#include <stdio.h>
int main()
{
	int arr[10], i, ecnt=0, ocnt=0;
	
	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",arr[i]);
	}
	
	printf("\n Even Elements are: ");
	for(i=0;i<10;i++)
	{
	    if(arr[i]%2==0)
	    {
		    printf("%8d",arr[i]);
	    }
	}	
	
	printf("\n Odd Elements are: ");
	for(i=0;i<10;i++)
	{
	    if(arr[i]%2!=0)
	    {
		    printf("%5d",arr[i]);
	    }
	}
	return 0;
}


// Enter any 10 nos and display list of primes from it.

	no
	 [] [] [] [] [] [] [] [] [] []

#include <stdio.h>
int main()
{
	int nos[10],i,d,flg;

	printf("\n Enter any 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&nos[i]);
	}

	printf("\n All Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",nos[i]);
	}

	printf("\n Prime List: ");
	for(i=0;i<10;i++)
	{
		d=2;
		flg=0;
		while(d<=(nos[i]/2))
		{
			if(nos[i]%d==0)
			{
				flg=1;
				break;
			}
			d++;
		}
		if(flg==0)
		{
			printf("%5d",nos[i]);
		}
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int x[5]={23,67,33,56,92};
	int i, pos=0;
	for(int i=10; i<15; i++)
	{
		printf("\n %5d",x[pos]);
		pos++;
	}

	return 0;
}



// using iterator i as a position indicator


#include <stdio.h>
int main()
{
	int x[5]={23,67,33,56,92};
	int i;
	printf("\n Array elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%6d",x[i]);
	}
	return 0;
}


// input array of 8 nos display it, dispay the positions and count
// of elements div by 3 and 5 both

#include<stdio.h>
int main()
{
	int x[8];
	int cnt=0;
	int i;
	
	printf("\n Array Elements are :");
	for(int i=0; i<8; i++)
	{
		scanf("%d",&x[i]);
	}

	printf("\n Position of Element:");

	for( i=0; i<8; i++)
	{
		if(x[i]%3==0 && x[i]%5==0)
		{
			cnt++;
			printf("\n Element present at %d location",i);
		}
		
	}
	printf("\n Element Count of no Which is Divisible By 3 and 5 is %d",cnt);

}




/// WAP to input and display the array of 7 elements

#include<stdio.h>
int main()
{
	int arr[7];
	int i, pos=0;

	printf("\n Array Elements Taking as a Input: ");
	for(i=0; i<7; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n Array Elements are:");
	for(i=10; i<17; i++)
	{
		printf("%8d",arr[pos]);
		pos++;
	}

	return 0;
}


// Enter any 10 nos and count even and odd nos from it.

#include<stdio.h>
int main()
{
	int arr[10]={2,4,5,6,8,9,10,12,13,14};
	int i,evencnt=0, oddcnt=0;

		
	printf("\n Enter any 10 nos: ");

	for( i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}

	for( i=0; i<10; i++)
	{
		if(arr[i]%2==0)
		{
			evencnt++;
		}
		else
		{
			oddcnt++;
		}
	}
	
	printf("\n Elements are :");
	for(i=0; i<10; i++)
	{
		printf("%8d",arr[i]);
	}
	printf("\n Total Even_Count is %d and Odd Count is %d ",evencnt,oddcnt);
	return 0;
}

*/


