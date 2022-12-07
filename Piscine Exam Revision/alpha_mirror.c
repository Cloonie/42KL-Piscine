#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int result = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				result = 'm' - (av[1][i] - 'n');
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				result = 'M' - (av[1][i] - 'N');
			else
				result = av[1][i];
			write (1, &result, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}