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
	while (i <= 2147483647)
	{
	putnb(i);
	write(1, "\n", 1);
	i++;
	}
}