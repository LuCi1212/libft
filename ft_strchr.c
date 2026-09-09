/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:58:08 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 16:54:24 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
			return ((char *)&src[i]);
		i++;
	}
	if (src[i] == (char)c)
		return ((char *)&src[i]);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	const char str[] = "daje hfhg3gd daje";
	const char ch = 'm';
	char *res;

	res = ft_strchr(str, 'm3);

	printf("String after %c is -> %s\n", ch, res);

	return(0);
}
*/
