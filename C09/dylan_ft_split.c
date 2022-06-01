/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:28:21 by lchew             #+#    #+#             */
/*   Updated: 2022/05/15 20:28:21 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*Check if char c is not any of the saperator in charset.
Return 1 if true, otherwise, return 0 if is separator.*/
int	not_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

/*Count the number of strings separated by separators.
Return the strings' count.*/
int	countstr(char *str, char *charset)
{
	int		count;
	char	*s;

	count = 0;
	s = str;
	while (*s)
	{
		if (not_sep(*s, charset))
		{
			++count;
			while (not_sep(*s, charset) && *s)
				++s;
		}
		else
			++s;
	}
	return (count);
}

/*Count number of characters of string seperated by separatr.
Return the characters' count.*/
int	countchar(char *str, char *charset)
{
	int	countchar;

	countchar = 0;
	while (*str && not_sep(*str++, charset))
		++countchar;
	return (countchar);
}

/*If failed Malloc to res, return NULL.
If str argument is empty, return NULL res.
Otherwise, duplicate str to first string in array res.
Array res is then NULL terminated.*/
char	**emptystr(char *str, char **res)
{
	int	i;
	int	j;

	i = 0;
	if (!res)
		return (NULL);
	res[0] = 0;
	if (*str == '\0')
		return (res);
	while (*(str + i))
		i++;
	j = 0;
	res[0] = malloc(sizeof(char) * i + 1);
	while (*str)
		res[0][j++] = *str++;
	res[0][j] = '\0';
	res[1] = 0;
	return (res);
}

/*Function that split a string of character depending on 
another string of characters (seperator) denoted by charset.
The function returns an array of strings seperated by charset. 
The array is null-terminated.
The strings in array cannot be empty*/
char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	res = malloc(sizeof(char *) * (countstr(str, charset) + 1));
	if (!res || *str == '\0' || *charset == '\0')
		return (emptystr(str, res));
	res[0] = 0;
	while (*str)
	{
		j = 0;
		if (not_sep(*str, charset))
		{
			res[i] = malloc(sizeof(char) * countchar(str, charset) + 1);
			while (not_sep(*str, charset) && *str)
				res[i][j++] = *str++;
			res[i++][j] = '\0';
		}
		else
			++str;
	}
	res[i] = 0;
	return (res);
}

int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour!je m'appel|Arthur, ABC", ", |!");
	while (i < 5)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
