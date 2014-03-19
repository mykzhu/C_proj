//
// counting spaces,
//

#include <stdio.h>

main()
{
  int numb_spaces = 0,
      numb_tabs =0,
      numb_lines =0;
      
  char c;
  
  while((c = getchar()) != '1')
  {
    //printf("c= %c\n", c);
    if (c == ' ')
      numb_spaces ++;
    if (c == '\t')
      numb_tabs++;
    if (c == '\n')
      numb_lines++;
  }
  printf("number of:\nspaces = %d\ntabs = %d\n lines = %d \n", numb_spaces, numb_tabs, numb_lines);
}