int	ft_atoi(const char *str)
{
	int i = 0;
	int neg = 1;

	char res = 0;

	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * neg)
}

#include <stdlib.h>
int main(void)
{
	char *s = "#";
	printf("%d %d", ft_atoi(s), atoi(s));
	return (0);
}