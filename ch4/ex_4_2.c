//
// improving atof for read value 123.456e-6
//

#include <stdio.h>
#include <ctype.h>

double atof (char s[])
{
	double val, power;
	int i, sign, pow_sign, e_pow=0, res =1;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	
	if (s[i] == '+' || s[i] == '-')
		i++;

	for (val = 0.0; isdigit (s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		printf("i= %d\t s[i]= %c\t val= %f\n",i,s[i],val );
	}

	if(s[i] =='.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	if((s[i] =='e') || (s[i] =='E'))
	{
		i++;

		pow_sign = (s[i] == '-')? -1: 1;

		if (s[i] == '+' || s[i] == '-')
			i++;

		for (e_pow =0; isdigit (s[i]); i++)
			e_pow = e_pow * 10 +(s[i] - '0');

		for (i = 0; i <= e_pow; i++)
		{
			printf("res= %d\n", res);
			res *= 10;
		}

		if (pow_sign == 1)
			return sign * val / power * res;
		else
			return sign * val / power / res;
	}
	else
		return sign * val / power;
}

int main(int argc, char const *argv[])
{
	float res;

	printf("result: %f\n", atof("1234.56 12"));
	printf("result: %f\n", atof("123.456e3"));
	return 0;
}