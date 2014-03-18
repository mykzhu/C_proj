//
// for from 300 downto 0
//
#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;
  printf("celsius fahrengeit\n");
  while(fahr >= lower)
  {
    celsius = (5.0/0.9)* (fahr-32.0);
    printf ("%0.3f %6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
}