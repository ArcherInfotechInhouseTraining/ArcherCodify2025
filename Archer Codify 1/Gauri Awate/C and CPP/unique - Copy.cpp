#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
    int i,j,cnt=0;

    printf("\nEnter any string:");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=0;
       for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                cnt++;
                str[i]=-1;
            }
            
        }
        
        if(cnt>0 && str[i]!=0)
        {
            printf("\n%c is present %d times",str[i],cnt);
        }

    }
    

    
return 0;
}
