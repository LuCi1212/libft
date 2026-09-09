/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:31:03 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 11:31:13 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t	size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((str1[i] || str2[i]) && i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else
			i++;
	}
	return (0);
}
