//
// returned value from getchar
//
#include <stdio.h>

main()
{
  char c;
  
  for(;;)
  {
    c = (getchar() != EOF);
    printf("==> %d\n",c);
    if (c) break;
  }
}