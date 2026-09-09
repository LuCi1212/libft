/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 21:08:21 by luci              #+#    #+#             */
/*   Updated: 2026/09/07 21:19:04 by luci             ###   ########.fr       */
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
