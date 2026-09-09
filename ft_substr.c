/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:38:33 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 12:03:57 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	tmp = malloc(len * sizeof(char) + 1);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = s[start];
		start++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_substr("Hello World", 6, 5);
	printf("Test 1: %s\n", result);
	free(result);

	result = ft_substr("Hello World", 0, 5);
	printf("Test 2: %s\n", result);
	free(result);

	result = ft_substr("Hello World", 3, 4);
	printf("Test 3: %s\n", result);
	free(result);

	result = ft_substr("Hello", 3, 100);
	printf("Test 4: %s\n", result);
	free(result);

	result = ft_substr("Hello", 5, 5);
	printf("Test 5: \"%s\"\n", result);
	free(result);

	result = ft_substr("Hello", 10, 5);
	printf("Test 6: \"%s\"\n", result);
	free(result);

	result = ft_substr("", 0, 5);
	printf("Test 7: \"%s\"\n", result);
	free(result);

	return (0);
}
*/
