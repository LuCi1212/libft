/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 16:56:22 by luci              #+#    #+#             */
/*   Updated: 2026/09/08 21:11:57 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	num = n;
	len = numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[len--] = '0' + (num % 10);
		num = num / 10;
	}
	return (str);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	char	*str;

	printf("===== ft_itoa tests =====\n");

	str = ft_itoa(0);
	printf("0:           \"%s\"\n", str);
	free(str);

	str = ft_itoa(1);
	printf("1:           \"%s\"\n", str);
	free(str);

	str = ft_itoa(-1);
	printf("-1:          \"%s\"\n", str);
	free(str);

	str = ft_itoa(9);
	printf("9:           \"%s\"\n", str);
	free(str);

	str = ft_itoa(10);
	printf("10:          \"%s\"\n", str);
	free(str);

	str = ft_itoa(-10);
	printf("-10:         \"%s\"\n", str);
	free(str);

	str = ft_itoa(42);
	printf("42:          \"%s\"\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("-42:         \"%s\"\n", str);
	free(str);

	str = ft_itoa(123456);
	printf("123456:      \"%s\"\n", str);
	free(str);

	str = ft_itoa(-123456);
	printf("-123456:     \"%s\"\n", str);
	free(str);

	str = ft_itoa(INT_MAX);
	printf("INT_MAX:     \"%s\"\n", str);
	free(str);

	str = ft_itoa(INT_MIN);
	printf("INT_MIN:     \"%s\"\n", str);
	free(str);

	return (0);
}
*/