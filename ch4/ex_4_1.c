//
// strindex(s, t) from right side
//

#include <stdio.h>

int strindex(char s[], char t[])
{
  int i,l,j,k,z;
  
  for(i = 0; s[i] != '\0'; i++)
    ;
  for(l = 0; t[l] != '\0'; l++)
    ;
  for(j=i;j!=0; j--)
  {
    for(z=j,k=l; t[k] != t[0] && s[z] == t[k]; z--,k--)
      ;
    if( k>0 && t[k] == t[0])
      return i;
  }

  return -1;
}

int main()
{
  printf("result %d\n",strindex("kolka","ka"));
  return -1;
}