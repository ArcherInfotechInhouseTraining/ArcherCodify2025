// Write a program to reverse the string

	// In above program the array(t) used as a stack
	// in stack -> Last in first out (LIFO) also stack is fist in last out

#include<stdio.h>
void main()
{
    char arr[50],tmp[50];
    int top=-1,i;

    printf("Enter String\n");
    gets(arr);
    //insertion(push)
    for(i=0;arr[i]!='\0';i++)
    {
        if(top<9)
        {
            top++;
            tmp[top]=arr[i];
        }
    }
    //remove(pop)
    i=0;
    while(top!=(-1))
    {
       arr[i]=tmp[top];
       i++;
       top--;

    }
    printf("Reversing string is : %s",arr);
}

