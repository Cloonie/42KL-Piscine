#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main()
{
	char	str1[] = "abcd";
	char	str2[] = "abcd";
	char	str3[] = "abcdefg";

	printf ("%d\n", ft_strcmp(str1, str2));
	printf ("%d\n", ft_strcmp(str1, str3));
}