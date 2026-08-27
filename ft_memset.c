/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:43:10 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 15:55:11 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello World";

	ft_memset(str1 + 1, '*', 5);
	memset(str2 + 1, '*', 5);

	printf("My:     %s\n", str1);
	printf("System: %s\n", str2);

	return (0);
}
*/