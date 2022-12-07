#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int a;
	char op;
	int b;
	int result;

	if (ac == 4)
	{
		result = 0;
		a = atoi(av[1]);
		op = av[2][0];
		b = atoi(av[3]);
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n", result);
	}
	else
		write (1, "\n", 1);
}