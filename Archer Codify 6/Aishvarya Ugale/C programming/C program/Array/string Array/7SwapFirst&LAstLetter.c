
	/* WAP to interchange the first and last character of every word in the string

	str --> hello   best  morning  student
        o/p --> oellh   tesb  gorninm  ttudens
        */


        #include<stdio.h>
        void main()
        {
            char str[10],f,l;
            int i;

            printf("Enter string\n");
            gets(str);

            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]==' ' && str[i+1]>='a' && str[i+1]<='z' || str[i+1]>='A' && str[i+1]<='Z')
                {
                    f=str[i+1];
                    printf("first %c\n",f);
                }
                else if(str[i+1]==' ' && str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
                {
                    l=str[i];
                }
            }

            printf("first %c\n",f);
            printf("last %c",l);
        }
