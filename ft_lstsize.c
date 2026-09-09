/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:29:30 by luci              #+#    #+#             */
/*   Updated: 2026/09/07 23:36:32 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*curr;

	count = 0;
	curr = lst;
	while (curr != NULL)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*list;
	t_list	*node2;
	t_list	*node3;

	list = ft_lstnew("World");
	node2 = ft_lstnew("Hello");
	node3 = ft_lstnew("42");

	list->next = node2;
	node2->next = node3;

	printf("List size: %u\n", ft_lstsize(list));

	free(node3);
	free(node2);
	free(list);

	return (0);
}
*/
