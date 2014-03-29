//
// strindex(s, t) from right side
//

#include <stdio.h>

int strindex(char s[], char t[])
{
  int i,j,k, res = -1;
  
  for(i =0 ;s[i]!='\0'; i++)
  {
    for(j=i,k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if( k>0 && t[k] == '\0')
    {
      res = i;
      continue;
    }
  }

  return res;
}

int main()
{
  printf("result %d\n",strindex("kakolka","ka"));
  printf("result %d\n",strindex("kakolka","zuka"));
  return 1;
}