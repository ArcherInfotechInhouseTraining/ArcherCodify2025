/*Collection of Strings(1D Character array)

		decl syntax:

			char <ar_nm>[<No_of_lines>][<no_of_chars_per_line>]

			e.g.
			char s[5][50];


			[a][m][i][t][ ][p][a][t][i][l][0][][][][][][][][][][][][][][][][][][][][] <----- s[0]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[1]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[2]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[3]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[4]

			// init and display

			*/




void main()
{
	char s[5][50]={"amit patil","yash pol","shiv chougule","niket joshi","pradip sutar"};
	int i;

	printf("\n Student List \n");
	for(i=0;i<5;i++)
	{
		printf("\n %s",s[i]);
	}

}

