/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:31:53 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:31:54 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
