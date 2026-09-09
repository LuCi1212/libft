/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:32:19 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:32:21 by winhein          ###   ########.fr       */
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