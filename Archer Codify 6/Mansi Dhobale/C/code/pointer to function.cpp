/*void mumbai();
void delhi();
void patna();
int main()
{
	printf("\n At start in main()");
	mumbai();
	printf("\n back to main from mumbai");
	delhi();
	printf("\n back to main() from delhi");
	printf("\n At end in main()");
	return 0;
}

void mumbai()
{
	printf("\n i am in mumbai");
}

void delhi()
{
	printf("\n i am in delhi");
	patna();
	printf("\n back to delhi from patna");
}

void patna()
{
	printf("\n i am in patna");
}*/

//simple function (function without argument without return type)

/*#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
    
}
void add()
{   
    int a,b,tot;
    printf("\n enter the number:");
    scanf("%d %d",&a,&b);
    tot=a+b;
    printf("\n total is : %d",tot);
    
}*/

//function with argument without return type
void add();
int main()
{
    int a,b;
    printf("\n enter the number:");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
    
}
void add(int v,int u)
{
    int tot;
    tot=v+u;
    print("\n total is:".tot);
}



