//
// gistogram of frequencies of words
//

#include <stdio.h>
#include <string.h>

#define OUT 0
#define IN 1

main()
{
	char words[20][255],
		 c;
	int col  = 0,
		row  = 0,
		word = 0,
		i    = 0,
		freq = 0,
		j    = 0;

	while((c = getchar()) != EOF)
	{
		if((c == ' ') || (c == '\n') || (c == '\t'))
		{
			word = OUT;
		}
		else
		{
			word = IN;
		}

		if (word == IN)
		{	
			if (col == 0)
				row++;
			//printf("row = %d\n", row);
			words[row][col] = c;
			col++;
			//printf("col = %d\n", col);
		}
		else if (word == OUT)
			col = 0;
	}

	for (i = 1; i <= row; i++)
	{
		printf("%s\n",&words[i][0]);
		for (j = i+1; j <= row; j++)
			if (strcmp(&words[i][0], &words[j][0]))
				freq++;
		printf("freq = %d\n", freq);
		freq = 0;
	}


}