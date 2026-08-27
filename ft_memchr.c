/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 23:28:30 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 15:55:34 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)src;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello World";
	char	*my_result;
	char	*real_result;

	my_result = ft_memchr(str, 'l', 11);
	real_result = memchr(str, 'l', 11);

	printf("My:   %s\n", my_result);
	printf("Real: %s\n", real_result);

	return (0);
}
*/