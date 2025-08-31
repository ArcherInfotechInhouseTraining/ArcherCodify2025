//  Dangling pointer:

int main()
{
    int *p,*q,cnt,i;

	printf("\n Enter the element count: ");
	scanf("%d",&cnt);

	p=(int*)malloc(cnt*sizeof(int));      // allocates the memory for pointer
	q=p;
	printf("\n Enter the %d Nos: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",(p+i));
	}

	printf("\n Elements are: ");
	for(i=0;i<cnt;i++)
	{
		printf("%5d",*(p+i));
	}
        free(p); 
	            // Releases the allocated location, 
                // After the releasing pointer becomes the Dangling pointer and q also.
			
	return 0;
}

