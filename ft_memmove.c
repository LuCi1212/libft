/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:21:22 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 15:55:29 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((const unsigned char *) src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			((unsigned char *) dest)[i - 1]
				= ((const unsigned char *) src)[i - 1];
			i--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[20] = "123456789";
	char	str2[20] = "123456789";

	memcpy(str1 + 2, str1, 5);
	ft_memmove(str2 + 2, str2, 5);

	printf("memcpy:  %s\n", str1);
	printf("memmove: %s\n", str2);
}
*/