#include<stdio.h>
#define SIZE 5
int main()
{
int x[SIZE],i,mid,start,end,no,flag;
printf("\n enter the array:");
for(i=0;i<SIZE;i++)
{
scanf("%d",&x[i]);
}
printf("\n no to be searched:");
start=0;
end=SIZE-1;
do
{
mid=(start+end)/2;
{
if(x[mid]==no)
{
flag=1;
break;
 }
 else if(x[mid]<no)
 {
 end=mid-1;
 }
 else if(x[mid]>no)
 {
 start=mid+1;
 }
 }

}while(start<=end);
if(flag==1)
{
printf("\n %d is present at %d location",no,mid);
}
else
{
printf("\n %d is not present",no);
}
return 0;
}
