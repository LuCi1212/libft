/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:25:10 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 12:29:46 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*p;

	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int	main(void)
{
	int		*my;
	int		*real;
	size_t	i;

	printf("===== TEST 1: int array =====\n");

	my = ft_calloc(5, sizeof(int));
	real = calloc(5, sizeof(int));

	if (my == NULL || real == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("My calloc:   ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", my[i]);
		i++;
	}
	printf("\n");

	printf("Real calloc: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", real[i]);
		i++;
	}
	printf("\n");

	free(my);
	free(real);

	printf("\n===== TEST 2: char array =====\n");

	my = ft_calloc(10, sizeof(char));
	real = calloc(10, sizeof(char));

	if (my == NULL || real == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("My calloc is zero:   %s\n", 
		((char *)my)[0] == '\0' ? "YES" : "NO");
	printf("Real calloc is zero: %s\n",
		((char *)real)[0] == '\0' ? "YES" : "NO");

	free(my);
	free(real);

	printf("\n===== TEST 3: overflow =====\n");

	my = ft_calloc((size_t)-1, 2);

	printf("Overflow result: %p\n", (void *)my);

	if (my == NULL)
		printf("Overflow handled correctly!\n");
	else
	{
		printf("Overflow test failed!\n");
		free(my);
	}

	return (0);
}
*/