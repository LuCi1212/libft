/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:31:27 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:31:29 by winhein          ###   ########.fr       */
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
