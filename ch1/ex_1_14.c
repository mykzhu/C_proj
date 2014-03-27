//
// gistogram of frequencies of sumbols
//

#include <stdio.h>
#include <string.h>

#define OUT 0
#define IN 1

main()
{
	// 65 - 122
	
	char words [58],
		 c;
	int col  = 0,
		row  = 0,
		word = 0,
		i    = 0,
		freq = 0,
		j    = 0;
	for(i=0;i<=58;i++)
	  words[i] = 0;
	
	while((c = getchar()) != EOF)
	{
	  words[c-65]++;
	}

	for(i=0;i<=58;i++)
	{
	  if(words[i] < 0) words[i] = 0;
	  printf("%c = %d\n",i+65, words[i]);
	}
}