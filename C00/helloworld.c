#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 42;
	b = 49;
	printf("Hello %d world! %d\n", a, b);
	a = 12;
	b = a;
        printf("Hello %d world! %d\n", a, b);
}
