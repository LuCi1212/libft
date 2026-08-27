/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:16:37 by luci              #+#    #+#             */
/*   Updated: 2026/08/27 15:55:14 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main (void)
{
	printf("1.lenght is -> %d\n", ft_strlen("daje"));
	printf("2.lenght is -> %d\n", ft_strlen("roma."));
	printf("3.lenght is -> %d\n", ft_strlen("sambucone"));
}
*/
