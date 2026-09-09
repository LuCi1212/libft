/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 23:53:26 by luci              #+#    #+#             */
/*   Updated: 2026/09/09 12:03:33 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tmp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strjoin("Hello", "World");
	printf("Test 1: %s\n", result);
	free(result);

	result = ft_strjoin("Hello ", "World!");
	printf("Test 2: %s\n", result);
	free(result);

	result = ft_strjoin("", "World");
	printf("Test 3: %s\n", result);
	free(result);

	result = ft_strjoin("Hello", "");
	printf("Test 4: %s\n", result);
	free(result);

	result = ft_strjoin("", "");
	printf("Test 5: \"%s\"\n", result);
	free(result);

	return (0);
}
*/