#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str[] = "asdffhgfdfuytf";
	printf ("Before: %s\n", str);
	printf ("After: %s", ft_strupcase(str));
}

