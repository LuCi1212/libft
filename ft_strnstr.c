/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:02:22 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 12:09:52 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!src && !n)
		return (0);
	if (find[0] == '\0' || find == src)
		return ((char *)src);
	while (src[i])
	{
		j = 0;
		while ((i + j) < n && src[i + j] == find[j])
		{
			if (src[i + j] == '\0' && find[j] == '\0')
				return ((char *)&src[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *)(src + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*src;
	const char	*find;
	char		*result;

	src = "Hello World Hello";

	find = "World";
	result = ft_strnstr(src, find, 17);
	printf("1. %s\n", result);

	find = "Hello";
	result = ft_strnstr(src, find, 17);
	printf("2. %s\n", result);

	find = "Hello";
	result = ft_strnstr(src, find, 5);
	printf("3. %s\n", result);

	find = "Hello";
	result = ft_strnstr(src, find, 4);
	printf("4. %s\n", result);

	find = "XYZ";
	result = ft_strnstr(src, find, 17);
	printf("5. %s\n", result);

	find = "";
	result = ft_strnstr(src, find, 17);
	printf("6. %s\n", result);

	return (0);
}
*/