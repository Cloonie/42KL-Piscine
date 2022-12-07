#include <unistd.h>

void putnb(int nb)
{
	if (nb > 9)
		putnb(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz" , 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnb(i);
		write(1, "\n", 1);
		i++;
	}
}