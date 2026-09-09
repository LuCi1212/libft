/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:34:11 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:34:12 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
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
