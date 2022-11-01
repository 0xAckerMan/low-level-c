#include <stdio.h>

int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;

	ptr = &var;
	printf("The value of var = %d\n",var);
	printf("Value of *ptr is %p\n", *ptr);
	printf("the value of address of var %p\n",&var);
	printf("the val of address of ptr %p\n",&ptr);
return (0);
}
