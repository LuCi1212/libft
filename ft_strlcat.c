/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:21:15 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 13:06:49 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < destsize && dest[i])
		i++;
	if (i == destsize)
		return (destsize + ft_strlen(src));
	while (src[j] && i + j + 1 < destsize)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < destsize)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[20] = "Hello ";
	char	dest2[20] = "Hello ";
	char	dest3[10] = "Hello ";
	char	dest4[10] = "Hello ";
	size_t	my_result;
	size_t	real_result;

	printf("===== TEST 1: Enough space =====\n");

	my_result = ft_strlcat(dest1, "World", sizeof(dest1));
	real_result = strlcat(dest2, "World", sizeof(dest2));

	printf("My string:     \"%s\"\n", dest1);
	printf("Real string:   \"%s\"\n", dest2);
	printf("My return:     %zu\n", my_result);
	printf("Real return:   %zu\n", real_result);

	printf("\n===== TEST 2: Not enough space =====\n");

	my_result = ft_strlcat(dest3, "World", sizeof(dest3));
	real_result = strlcat(dest4, "World", sizeof(dest4));

	printf("My string:     \"%s\"\n", dest3);
	printf("Real string:   \"%s\"\n", dest4);
	printf("My return:     %zu\n", my_result);
	printf("Real return:   %zu\n", real_result);

	return (0);
}
*/