//
// visible symbols \t \b \\
//
#include <stdio.h>

main()
{
  char c;
  
  while ((c = getchar()) != '1' )
  {
    switch(c)
    {
      case '\b': printf("\\b");
	break;
      case '\t':printf("\\t");
	break;
      //case '\\':printf("\\");
	//break;
      default: printf("%c",c);
    }
  }
}