#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int 	i = 0;
	char    *array;

	array = malloc(sizeof(*array) * ft_strlen(src) + 1);
	if (array == NULL)
		return (NULL);
	while (src[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

/*
#include <stdio.h>
int		main(void)
{
    printf("%s\n", ft_strdup("NI MA DE CAO HAI"));
    return (0);
}
*/