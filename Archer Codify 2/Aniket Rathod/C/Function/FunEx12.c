// Visiblity of Variables:
// enter N number and find the total and avg using function.

#include<stdio.h>
#include<stdlib.h>

float findsumandavg(int cnt);
int tot=0;
int main()
{
	int cnt;
	float ans;
	printf("\n Enter the element count: ");
	scanf("%d",&cnt);

	ans=findsumandavg(cnt);
	printf("\n Total of %d nos %d",cnt,tot);
	printf("\n Avg of %d nos %0.2f",cnt,ans);
}

float findsumandavg(int cnt)
{
	int no,i;
	float avg;
	for(i=0;i<cnt;i++)
	{
		scanf("%d",&no);
		tot=tot+no;
	}
	avg=tot/(float)cnt;
	return avg;
}
