#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[50];
	char *src;
	int n;

	n = 5;
	src = "Hello World";
	printf("%s", strncpy(dest, src, n));
}

