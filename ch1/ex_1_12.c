//
// new word in new line
//
#include <stdio.h>

char c;

main()
{
    while((c= getchar()) != EOF)
    {
      if( (c == ' ') || (c == '\t'))
	printf("\n");
      else
	printf("%c",c);
    }
}