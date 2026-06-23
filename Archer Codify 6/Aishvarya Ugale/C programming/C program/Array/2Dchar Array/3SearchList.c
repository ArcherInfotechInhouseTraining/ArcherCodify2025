// WAP to search friend in the friendlist
#include <stdio.h>
#include <stdio.h>
int main()
{
	char s[5][50];
	char nm[40];
	int i,j,k,cnt=0,flg;

	printf("\n Enter the student List \n");
	for(i=0;i<5;i++)
	{
		gets(s[i]);
	}

	printf("\n Enter the name to be searched: ");
	gets(nm);
	for(j=0;nm[j]!='\0';j++);

	printf("\n Student List \n");
	for(i=0;i<5;i++)
	{
		printf("\n %s",s[i]);

		flg=0;
		for(k=0;s[i][k]!='\0';k++);
		if(j==k)
		{
			for(k=0;k<=j;k++)
			{
				if(s[i][k]!=nm[k])
				{
					flg=1;
				}
			}
		}
		else
		{
			flg=1;
		}

		if(flg==0){cnt++;}
	}
	printf("\n %s is present %d times",nm,cnt);
	return 0;
}
