/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:31:20 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:31:22 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(t_list));
	if (first == NULL)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello 42");
	if (node == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Content: %s\n", (char *)node->content);

	if (node->next == NULL)
		printf("Next: NULL\n");

	free(node);
	return (0);
}
*/
