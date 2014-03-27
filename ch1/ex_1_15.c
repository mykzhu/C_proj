//
// adding function to temperature converter
//

float fahr(int clesius);

float fahr(int celsius)
{
	return (celsius/(5.0/0.9)+32.0);
}


int main(int argc, char const *argv[])
{
	float fahr_v, celsius;
  	int lower, upper, step;

  	lower = 0;
  	upper = 300;
  	step = 20;

  	celsius = lower;

  	printf("fahrengeit celsius\n");
  	
  	while(celsius <= upper)
  	{
    	printf ("%6.1f %0.3f\n", celsius, fahr(celsius));
    	celsius += step;
  	}
	return 0;
}