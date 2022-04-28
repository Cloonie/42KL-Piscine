#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char str[] = "ASDSAAmasjd123";
	printf ("Before: %s\n", str);
	printf ("After: %d", ft_str_is_alpha(str));
}

