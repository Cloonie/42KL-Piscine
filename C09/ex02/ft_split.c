/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:29:40 by mliew             #+#    #+#             */
/*   Updated: 2022/05/20 10:33:13 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	countstr(char *str, char *charset)
{
	char	*s;
	int		strcount;

	strcount = 0;
	s = str;
	while (*s)
	{
		if (not_sep(*s, charset))
		{
			++strcount;
			while (*s && not_sep(*s, charset))
				++s;
		}
		else
			++s;
	}
	return (strcount);
}

int	countchar(char *str, char *charset)
{
	int	charcount;

	charcount = 0;
	while (*str && not_sep(*str++, charset))
		++charcount;
	return (charcount);
}

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

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	res = malloc(sizeof(char *) * (countstr(str, charset) + 1));
	if (!res || *str == '\0' || *charset == '\0')
		return (emptystr(str, res));
	while (*str)
	{
		j = 0;
		if (not_sep(*str, charset))
		{
			res[i] = malloc(sizeof(char) * countchar(str, charset) + 1);
			while (*str && not_sep(*str, charset))
				res[i][j++] = *str++;
			res[i++][j] = '\0';
		}
		else
			++str;
	}
	res[i] = 0;
	return (res);
}

/*
int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour!je m'appel|Arthur,", ", |!");
	while (i < 5)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
/*
int main()
{
    char months[] = "JAN FEB MAR APR MAY JUN JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ", |||");

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}
*/