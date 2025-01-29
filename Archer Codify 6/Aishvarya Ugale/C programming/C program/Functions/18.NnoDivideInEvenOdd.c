// Enter the N numbers and divide them in group of even and odd nos

#include <stdio.h>
#include <stdlib.h>
int *ep, *op, ec=0, oc=0;
void input(int *q, int cnt)
{
    	int i;
    	printf("\n Enter the %d nos: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",(q+i));
	}
}

void output(int *q, int cnt)
{
    	int i;
	for(i=0;i<cnt;i++)
	{
		printf("%6d",*(q+i));
	}
}
void divideingroups(int *p,int cnt)
{
	int i,j=0,k=0;

	for(i=0;i<cnt;i++)
	{
		if(*(p+i)%2==0)
			ec++;
		else
			oc++;
	}

	ep=(int*)malloc(ec*sizeof(int));
	op=(int*)malloc(oc*sizeof(int));
	for(i=0;i<cnt;i++)
	{
		if(*(p+i)%2==0)
		{
			*(ep+j)=*(p+i);
			j++;
		}
		else
		{
			*(op+k)=*(p+i);
			k++;
		}

	}
}
int main()
{
	int *p, cnt;

	printf("\n Enter the n numbers: ");
	scanf("%d",&cnt);

	p=(int*)malloc(cnt*sizeof(int) );
	input(p,cnt);

	divideingroups(p,cnt);

	printf("\n Entered elements: ");
	output(p,cnt);

	printf("\n Even elements: ");
	output(ep,ec);

	printf("\n odd elements: ");
	output(op,oc);

	return 0;
}
