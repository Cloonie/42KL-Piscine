/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:22:41 by mliew             #+#    #+#             */
/*   Updated: 2022/04/27 15:09:09 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length = length + ((size - 1) * ft_strlen(sep)) + 1;
	if (size == 0)
		length = 1;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	int		length;
	char	*a;

	length = ft_total_len(size, strs, sep);
	a = malloc(sizeof (char) * length);
	*a = '\0';
	if (size == 0)
		return (a);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			a[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			a[c++] = sep[j++];
		i++;
	}
	a[c] = '\0';
	return (a);
}			

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*c = ", ";
	argv++;
	char 	*join = ft_strjoin(argc - 1, argv, c);

	printf("%p\n", join);
	printf("%s\n", join);
	free(join);
	//system("leaks a.out");
	return 0;
}
*/