/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:34:37 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:34:04 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (j < (size - 1) && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[20];
	char	dest2[20];
	char	dest3[6];
	char	dest4[6];
	char	dest5[20];
	char	dest6[20];
	size_t	my_result;
	size_t	real_result;

	printf("===== TEST 1: Enough space =====\n");

	my_result = ft_strlcpy(dest1, "Hello", sizeof(dest1));
	real_result = strlcpy(dest2, "Hello", sizeof(dest2));

	printf("My string:     \"%s\"\n", dest1);
	printf("Real string:   \"%s\"\n", dest2);
	printf("My return:     %zu\n", my_result);
	printf("Real return:   %zu\n", real_result);

	printf("\n===== TEST 2: Small buffer =====\n");

	my_result = ft_strlcpy(dest3, "Hello World", sizeof(dest3));
	real_result = strlcpy(dest4, "Hello World", sizeof(dest4));

	printf("My string:     \"%s\"\n", dest3);
	printf("Real string:   \"%s\"\n", dest4);
	printf("My return:     %zu\n", my_result);
	printf("Real return:   %zu\n", real_result);

	printf("\n===== TEST 3: Size is 0 =====\n");

	my_result = ft_strlcpy(dest5, "Hello", 0);
	real_result = strlcpy(dest6, "Hello", 0);

	printf("My return:     %zu\n", my_result);
	printf("Real return:   %zu\n", real_result);

	printf("\n===== TEST 4: Exact size =====\n");

	my_result = ft_strlcpy(dest1, "Hello", 6);
	real_result = strlcpy(dest2, "Hello", 6);

	printf("My string:     \"%s\"\n", dest1);
	printf("Real string:   \"%s\"\n", dest2);
	printf("My return:     %zu\n", my_result);
	printf("Real return:   %zu\n", real_result);

	return (0);
}
*/
