/*#include<stdio.h>
struct student
{
	int altno;
	float hsc;
	float cet;
	//it is the datatype of the next variable that present in the student
	struct student *next;
};
void main()
{
	struct student *start, *last, *tmp;
	int opt;
	start=NULL;
	 while(1)
	{
		printf("\n ---------- Menu ----------\n");
		printf("\n 1.Insert \n 2.Display \n 3.Stop");
		printf("\n Select your option: ");
		scanf("%d",&opt);

		switch(opt)
		{
			case 1:
				tmp=(struct student*)malloc(sizeof(struct student));
				printf("\n Enter the alt no, hsc percentage and cet marks of student: ");
				scanf("%d %f %f",&tmp->altno,&tmp->hsc,&tmp->cet);
				tmp->next=NULL;
				if(start==NULL)
				{
					start=tmp;
					last=tmp;
				}
				else
				{
					last->next=tmp;
					last=tmp;
				}
				break;
			case 2:
				tmp=start;
				while(tmp)
				{
					printf("\n Alt No: %d \t HSC Marks: %0.2f \t CET Marks: %0.2f",tmp->altno,tmp->hsc,tmp->cet);
					tmp=tmp->next;
				}
				break;
			case 3:
				exit(0);
			default:
				printf("\n Incorrect Option...!!!");
		}

	}
}
*/



/*/#include <stdio.h>
#include <stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
struct student
{
	int rno;
    struct Date exdt;
	int mrk[3];
	float per;
};

int main()
{
	int i,j,tot;
	struct student s[2];

	printf("\n Enter the student details");
	for(i=0;i<2;i++)
	{
		printf("\n Enter the rno of student %d: ",i+1);
		scanf("%d",&s[i].rno);
		printf("\n Enter the Exam Date: ");
		scanf("%d %d %d",&s[i].exdt.dd, &s[i].exdt.mm, &s[i].exdt.yyyy );
		printf("\n Enter the marks in 3 subjects: ");
		tot=0;
		for(j=0;j<3;j++)
		{
			scanf("%d",&s[i].mrk[j]);
			tot=tot+s[i].mrk[j];
		}
		s[i].per=tot/3.0;
	}
	printf("\n --------- Student Details --------- \n");
	printf("\n Enter the student details");
	for(i=0;i<2;i++)
	{
		printf("\n\n student %d: \nRNO: %d \t Percentage: %0.2f",i+1,s[i].rno,s[i].per);
		printf("\n Exam Date: %d-%d-%d",s[i].exdt.dd, s[i].exdt.mm, s[i].exdt.yyyy);
		printf("\n Marks: ");
		for(j=0;j<3;j++)
		{
			printf("%5d",s[i].mrk[j]);
		}
	}
	return 0;
}
*/



/*#include<stdio.h>
struct student{
    int rno;
    float hsc;
    float cet;
    struct student *next;
};
int main()
{
    struct student *start,*last,*temp;
    int opt;
    start=NULL;
    while(1){
        printf("\n 1.insert \t 2.display \t 3.stop");
        printf("\n enter the opt");
        scanf("%d",&opt);
     
    switch(opt){
        
    case 1:
    
    printf("\n enter the student details:");
    printf("\n enter the rollno,hsc and cet number of the stuent:");
    temp=(struct student*)malloc(sizeof(struct student));
    scanf("%d %f %f",&temp->rno,&temp->hsc,&temp->cet);
    temp->next=NULL;
    if(start=NULL)
    {
        start=temp;
        last=temp;
    }
    else
    {
        last->next=NULL;
        last=temp;
        
    }
    break;
    
    case 2:
         temp=start;
         while(temp)
         {
             printf("\n Roll No: %d \t HSC marks: %0.2f \t CET marks: %0.2f",temp->rno,temp->hsc,temp->cet);
             temp=temp->next;
         }
         break;
         
         
     case 3:
             exit(0);
             
    default:
    printf("\n");
        
    }
    
    
}
return 0;
}
*/

//



#include<stdio.h>
#define SIZE 5;
struct stack1
{
    int top;
    int  ar[SIZE];
};
int main()
{
    struct stack1 s1,s2;
    s1.top=-1;
    s2.top=-1;
    while(1)
    {
        int opt;
        printf("\n 1.push \t 2.pop \t 3.stop");
        printf("\n select the option:");
        scanf("%d",&opt);
        
        switch(opt)
        {
            printf("\n enter the option:");
            scanf("%d",&opt);
            if(opt==1)
            {
                if(top<(SIZE-1))
                {
                    printf("\n enter the element:");
                    s1.top++;
                    scanf("%d",&s1.ar[s1.top]);
                }
                else
                {
                    printf("\n stack is full");
                }
            }
            if(opt==2)
            {
                if(top<(SIZE-1))
                {
                    printf("\n enter the element:");
                    s2.to++;
                    scanf("%d",&s2.ar[s2.top]);
                }
            }
            break;
            case 2:
            
               printf("\n select the option 1 or 2");
               scanf("%d",&opt);
               if(opt==1)
               {
                   if(s1[top]!=-1)
                   {
                       printf("\n after pop  operatio:",s1.ar[s1.top]);
                       s1.top--;
                       
                   }
                   else
                   {
                       printf("\n stack is empty:");
                   }
               }
               if(opt==2)
               {
                   if(s2[top]!=-1)
                   {
                       printf("\n after pop operations:",s2.ar[s2.top]);
                       s2.top--;
                   }
                   else
                   {
                       printf("\n stack is empty:");
                   }
               }
               break;
            case 3:
                     printf("\n invalid string:");
        }
    }
    return 0;
}




