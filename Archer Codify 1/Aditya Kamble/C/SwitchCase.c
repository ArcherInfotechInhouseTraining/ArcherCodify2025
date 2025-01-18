/*

#include<stdio.h>
int main()
{
    int a,b,ans;
    int opt;

    printf("\n 1.Add \n 2.Sub \n 3.Mul \n 4.Div ");
    printf("\n Enter Your Choice:");
    scanf("%d",&opt);

    printf("\n Enter a Values of a and b:");
    scanf("%d%d",&a,&b);

    switch (opt)
    {
    case 1:
        ans=a+b;
        break;
    case 2:
        ans=a-b;
        break;
    case 3:
        ans=a*b;
        break;
    case 4:
        ans=a/b;
        break;            
    default:
        printf("\n Incoorect Option");
        break;
    }
    printf("%d is answer",ans);
    return 0;
}



#include<stdio.h>
int main()
{
    float a,b,ans=0.0;
    int opt;
    printf("\n ---------- Menu -------------\n");
    printf("\n 1.add \n 2.sub \n 3.multi \n 4.div");
    
    printf("\n Select your option: ");
    scanf("%d",&opt);
    
    printf("\n Enter the values of a and b: ");
    scanf("%f %f",&a,&b);
    
    switch(opt)
    {
        case 1:
            ans=a+b;
            break;
        case 2:
            ans=a-b;
            break;
        case 3:
            ans=a*b;
            break;
        case 4:
            ans=a/b;
            break;
    }
    printf("%f is answer",ans);
    return 0;
}


 // case constant sequence is not important

#include<stdio.h>    
int main()
{
    float a,b,ans=0.0;
    int opt;
    printf("\n ---------- Menu -------------\n");
    printf("\n 1.add \n 2.sub \n 3.multi \n 4.div");
    
    printf("\n Select your option: ");
    scanf("%d",&opt);
    
    printf("\n Enter the values of a and b: ");
    scanf("%f %f",&a,&b);
    
    switch(opt)
    {
        case 4:
            ans=a/b;
            break;
        case 1:
            ans=a+b;
            break;
        default:
            printf("\n Incorrect Option");
        case 3:
            ans=a*b;
            break;
        case 2:
            ans=a-b;
            break;
    }
    printf("%f is answer",ans);
    return 0;
}

// character can be used as a case constant
    
  
int main()
{
    float a,b,ans=0.0;
    char opt;
    printf("\n ---------- Menu -------------\n");
    printf("\n a.add \n b.sub \n c.multi \n d.div");
    
    printf("\n Select your option: ");
    scanf("%c",&opt);
    
    printf("\n Enter the values of a and b: ");
    scanf("%f %f",&a,&b);
    
    switch(opt)
    {
        case 'a':
            ans=a+b;
            break;
        case 'b':
            ans=a-b;
            break;
        case 'c':
            ans=a*b;
            break;
        case 'd':
            ans=a/b;
            break;
        default:
            printf("\n Incorrect Option");
    }
    printf("\n %f is answer",ans);
    return 0;
}

// It will work fine but as uppercase and lowercase characters are different, it will
    // give incorrect Option for same letters in uppercase.
    
    // this problem can be solved as...
    
int main()
{
    float a,b,ans=0.0;
    char opt;
    printf("\n ---------- Menu -------------\n");
    printf("\n a.add \n b.sub \n c.multi \n d.div");
    
    printf("\n Select your option: ");
    scanf("%c",&opt);
    
    printf("\n Enter the values of a and b: ");
    scanf("%f %f",&a,&b);
    
    switch(opt)
    {
        case 'A':
        case 'a':
            ans=a+b;
            break;
        case 'B':
        case 'b':
            ans=a-b;
            break;
        case 'C':
        case 'c':
            ans=a*b;
            break;
        case 'D':
        case 'd':
            ans=a/b;
            break;
        default:
            printf("\n Incorrect Option");
    }
    printf("\n %f is answer",ans);
    return 0;
}




*/
