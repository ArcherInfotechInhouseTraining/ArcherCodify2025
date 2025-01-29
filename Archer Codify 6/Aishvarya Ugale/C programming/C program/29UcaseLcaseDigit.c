 // Enter any character and display it is ucase, lcase, digit or special symbol (use ladder)


 #include<stdio.h>
 void main()
 {
     char ch;

     printf("Enter Character :\n");
     ch=getchar();
     if(ch>='A' && ch<='Z')
     {
         printf("Character is Uppercase:\n",ch);
     }
     else if(ch>='a' && ch<='z')
     {
         printf("Character is Lowercase :%c\n",ch);
     }
     else if(ch>='0' && ch<='9')
     {
         printf("Character is Digit :%d",ch);
     }
     else{
        printf("Character is Symbol\n");
     }

 }
