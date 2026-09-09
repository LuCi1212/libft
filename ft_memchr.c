/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:31:44 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:31:45 by winhein          ###   ########.fr       */
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