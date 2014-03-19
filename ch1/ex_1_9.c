//
// copy symbols to output and change 2 spaces to 1
//

#include <stdio.h>

main()
{
  int flag = 0;
      
  char c;
  
  while((c = getchar()) != '1')
  {
    
    if (c == ' ') flag++;
    else flag = 0;
    //printf("flag = %d\n", flag);
    if (flag < 2)
    {
      printf("%c", c);
    }
  }
}