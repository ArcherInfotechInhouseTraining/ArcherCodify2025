/* 8.  Write a program to print the following Patterns.

*********
 ********
  *******
   ******
    *****
     ****
      ***
       **
        *    
 and 

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA


class Pattern
{

public static void main(String args[])
{

int i,j;

for(i=0;i<9;i++)
{
  for(j=0;j<9;j++)
{ 
if(j<i)
{
System.out.print(" ");
}else
{
System.out.print("*");
}
}
System.out.println("\n");
}

}
}

*/

class Pattern
{

public static void main(String args[])
{

int i,j;
char ch;

for(i=0;i<5;i++)
{
ch='A';
  for(j=0;j<(5+i);j++)
{ 
 if(j<(4-i))
{
System.out.print(" ");

}else if(j<5)
{

System.out.print(ch);
ch++;
if(j==4)
{
ch--;
}
}else
{
--ch;
System.out.print(ch);

}

}
System.out.println("\n");
}

}
}