#include <stdio.h>

int main()
		{int i;
		for (int i = 1; i <= 100; i++)
		{if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("Number = %d", i);
		printf("\n");}
		return 0;}