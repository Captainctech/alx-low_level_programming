#include <stdio.h>

int main(void)
{
	int n;
	int c[5];
	int *p;

	c[2] = 1024;
	p = &n;
	/*
	* write your line of code here...
	* Remember:
	* - you are not allowed to use a
	* - you are not allowed to modify
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("c[2] = %d\n", c[2]);
	return (0);
}
