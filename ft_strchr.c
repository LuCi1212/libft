/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:33:24 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:33:25 by winhein          ###   ########.fr       */
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
