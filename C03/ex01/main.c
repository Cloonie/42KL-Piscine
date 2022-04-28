#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char a[] = "A0234";
	char b[] = "A0234567";
	printf("%i\n", ft_strncmp(a,b,5));
}