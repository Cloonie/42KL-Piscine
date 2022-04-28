#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str[] = "ABC";
	printf ("Before: %s\n", str);
	printf ("After: %s", ft_strlowcase(str));
}

