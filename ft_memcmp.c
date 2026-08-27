/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 00:57:09 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 14:56:34 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*q;

	p = (const unsigned char *)str1;
	q = (const unsigned char *)str2;
	while (n > 0)
	{
		if (*p != *q)
			return (*p - *q);
		n--;
		p++;
		q++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n);

int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abc";
	char	str3[] = "abd";

	printf("My  : %d\n", ft_memcmp(str1, str2, 3));
	printf("Real: %d\n", memcmp(str1, str2, 3));

	printf("My  : %d\n", ft_memcmp(str1, str3, 3));
	printf("Real: %d\n", memcmp(str1, str3, 3));

	printf("My  : %d\n", ft_memcmp(str3, str1, 3));
	printf("Real: %d\n", memcmp(str3, str1, 3));

	return (0);
}
*/