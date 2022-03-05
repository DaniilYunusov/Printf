#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char *str = "string!";
	int c = -123143;
	char p = 's';
	int i = ft_printf("someone %u %d %p %c %s\n", c, c, str, p, str);
	int j = printf("someone %u %d %p %c %s\n", c, c, str, p, str);
	printf("%d\n", i);
	printf("%d\n", j);
}