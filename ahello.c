#include <stdio.h>

int main(void)
{
	int i;

	/* Simple text */
	puts("Hello World\n");

	for(i=0; i<5; i++)
		/* Loosy plural example */
		printf("Hello, %d World\n", i);

	return 0;
}

