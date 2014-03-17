#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("fahrengeit celsius\n");
  while(celsius <= upper)
  {
    fahr = celsius/(5.0/0.9)+32.0;
    printf ("%6.1f %0.3f\n", celsius, fahr);
    celsius += step;
  }
}
