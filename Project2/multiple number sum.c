#include <stdio.h>

main()
{
	int i,sum=0;

	for (i = 0; i <= 1000; i++) {
		if ((i % 3) == 0) sum += i;
	}

	printf(" Sum all multiple number of 3 = %d\n", sum);
}