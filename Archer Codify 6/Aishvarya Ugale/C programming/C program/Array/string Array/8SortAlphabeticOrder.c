
	/*WAP to sort the string in alpha. order

		str ---> Good day to All of u
		op ---->  aAddfllootu
		*/


		#include<stdio.h>
		void main()
		{
		    char str[40],tmp,cpy[40];
		    int i,j,k,z=0;

		    printf("Enter string\n");
		    gets(str);
//		    for(i=0;str[i]!='\0';i++)
//            {
//                for(j=i+1;str[j]!='\0';j++)
//                {
//                    if(str[i]>str[j])
//                    {
//                        tmp=str[i];
//                        str[i]=str[j];
//                        str[j]=tmp;
//                    }
//                }
//            }

//==============================================================================
//           for(i='a',j='A';i<='z',j<='Z';i++,j++)
//
//           {
//               for(k=0;str[k]!='\0';k++)
//               {
//                   if(str[k]==i || str[k]==j)
//                   {
//                       printf("%c",str[k]);
//                   }
//               }
//           }
//================================================================================

           for(i='a',j='A';i<='z',j<='Z';i++,j++)

           {
               for(k=0;str[k]!='\0';k++)
               {



                   if(str[k]==j)
                   {

                       cpy[z]=j;


                       z++;

                   }
                   else if(str[k]==i)
                   {

                       cpy[z]=i;

                       z++;

                   }

               }
           }
           printf("Sort : %s",cpy);
	}
