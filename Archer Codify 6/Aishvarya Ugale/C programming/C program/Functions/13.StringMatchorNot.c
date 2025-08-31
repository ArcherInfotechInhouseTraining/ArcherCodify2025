// WAP to find the strings are matching or not

int matching(char a1[50], char a2[60])
{
	int i,j;
	for(i=0;a1[i]!='\0';i++);
	for(j=0;a2[j]!='\0';j++);
	if(i!=j)
	{
		return -1;
	}
	for(i=0;i<=j;i++)
	{
		if(a1[i]!=a2[i])
		{
			return a1[i]-a2[i];
		}
	}
	return 1;
}
int main()
{
	char s1[50],s2[60];
	int ans;
	printf("\n Enter first string: ");
	gets(s1);

	printf("\n Enter second string: ");
	gets(s2);

	ans=matching(s1,s2);

	if(ans==1)
		printf("\n Strings are matching");
	else
		printf("\n Strings are not matching");

	return 0;
}
