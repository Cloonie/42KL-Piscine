#include <string.h>
#include <stdio.h>

unsigned int   ft_strlcat(char *dest, char *src, unsigned int size);

int main () 
{
	char			dest[] = "Hello";
	char			src[] = "World";
	unsigned int	size;

	size = 2;
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}