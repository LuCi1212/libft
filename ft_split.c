/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 20:28:26 by luci              #+#    #+#             */
/*   Updated: 2026/09/08 21:12:11 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (s == NULL)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	i;
	size_t	j;

	str = (char **)malloc((countword(s, c) + 1) * sizeof(char *));
	if (s == NULL || str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[j] = ft_substr(s, start, i - start);
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello   world 42", ' ');
	if (result == NULL)
		return (1);

	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}
*/
