#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char s2)
{
	int i = 0;
	while (s1[i])
	{
		if (s1[i] == s2)
			return (0);
		++i;
	}
	return (s1[i] - s2);
}
	

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char temp[256];

	while (s1[i] != '\0')
	{
		if (ft_strcmp(s2, s1[i]) == 0)
		{
			if (ft_strcmp(temp, s1[i]) != 0)
			{
				temp[j] = s1[i];
				++j;
			}
		}
		++i;
	}
	temp[j] = '\0';
	ft_putstr(temp);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
