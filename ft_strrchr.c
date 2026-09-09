/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:23:31 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 16:54:45 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return ((char *)&src[i]);
		i--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "hello world";
	char	*my_result;
	char	*real_result;

	my_result = ft_strrchr(str, 'l');
	real_result = strrchr(str, 'l');

	printf("My   : %s\n", my_result);
	printf("Real : %s\n", real_result);

	my_result = ft_strrchr(str, 'o');
	real_result = strrchr(str, 'o');

	printf("My   : %s\n", my_result);
	printf("Real : %s\n", real_result);

	my_result = ft_strrchr(str, 'x');
	real_result = strrchr(str, 'x');

	printf("My   : %p\n", (void *)my_result);
	printf("Real : %p\n", (void *)real_result);

	my_result = ft_strrchr(str, '\0');
	real_result = strrchr(str, '\0');

	printf("My   : %p\n", (void *)my_result);
	printf("Real : %p\n", (void *)real_result);

	return (0);
}
*/
/*
char	*strrchr(const char *src, int c)
{
	int	i;
	char *dest;

	dest = NULL;
	i = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
			dest = (char *)&src[i];
		i++;
	}

	if (src[i] == c)
		return ((char *)&src[i]);
	return (dest);
}
*/
