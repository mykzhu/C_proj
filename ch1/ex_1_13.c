//
// gistograms of lehgth for inputed words
//

#include <stdio.h>

void print_star(int amount)
{
	int i =  0;

	for(i=0;i<amount;i++)
		printf("*");
	printf("\n");
}

int main(int argc, char const *argv[])
{
	char c, flag = 0;
	int arr[100], word_len =0, i=0, j =0;

	while((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '\t') || (c == '\n'))
		{
			arr[i++] = word_len;
			word_len =0; 
		}
		else
			word_len++;
	}

	for(j=0;j<=i;j++)
		print_star(arr[j]);
	
	return 0;
}