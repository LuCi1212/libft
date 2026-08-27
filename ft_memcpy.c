/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:45:42 by luci              #+#    #+#             */
/*   Updated: 2026/08/26 23:23:36 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	size_t	i;

	i = 0;
	while (i < s)
	{
		((unsigned char *) dest)[i] = ((const unsigned char *) src)[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "helloWin";

	ft_memcpy(dest, dest + 1 , 5);

	printf("%s\n", dest);
	return (0);
}
*/
