
	// Pointer:


	// WAP to input percentage of marks of 10 students in HSC and display it.

int main()
{
	float mrk[10];
	int i;

	printf("\n Enter the percentage of 10 students: ");
	for(i=0;i<10;i++)
	{
		scanf("%f",&mrk[i]);
	}

	printf("\n List \n");
	for(i=0;i<10;i++)
	{
		printf("student %d - %0.2f",i+1,mrk[i]);
	}
	return 0;
}

 //------------------------------------------------------------------------------------------------

	// WAP to input percentage of marks of N students in HSC and display it.

int main()
{
	float mrk[100];
	int i,cnt;

	printf("\n Enter the student count: ");
	scanf("%d",&cnt);

	printf("\n Enter the percentage of %d students: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%f",&mrk[i]);
	}

	printf("\n List \n");
	for(i=0;i<cnt;i++)
	{
		printf("student %d - %0.2f",i+1,mrk[i]);
	}
	return 0;
}


	- In first way(array) will be used when you know the type and count of elements.
	- If you know the type but dont know the count, it will be decided at runtime then
	  you have two option.

		- decl an array with possible max size - problem is inefficient use of memory.
		- use pointer - will allocates the amount of memory needed.


	How to allocate the memory at runtime(Dynamic memory allocation).
		- In static allocation, type decl instruction allows you to assign an identifier to
		  allocated location.
		- In dynamic memory allocation, it will gives base address(begin byte number of allocated
		  location) in return, it will not allow you to assign an identifier to that location.
		- To allocate the memory, the builtin functions malloc(), calloc() or realloc() are used,
		  which are defined in stdlib.h/alloc.h
		- we need to store that address, to store an address the special type of variable is needed,
		  called pointer.

