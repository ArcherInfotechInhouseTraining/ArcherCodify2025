
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(n=0;n<=100;n++)
    {
        if(n%3==0  && n%5==0)
        {
            printf("Number is divisible by 3");
        }
        else
        {
            printf("Number is divisivle by 5");
        }
    }
    return 0;
}