/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:30:10 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:30:12 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while ((*lst))
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void	my_del(void *content)
{
	printf("Deleting: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*list;
	t_list	*node2;
	t_list	*node3;

	list = ft_lstnew(ft_strdup("Hello"));
	node2 = ft_lstnew(ft_strdup("World"));
	node3 = ft_lstnew(ft_strdup("42"));

	list->next = node2;
	node2->next = node3;

	printf("Before clear:\n");
	printf("%s\n", (char *)list->content);
	printf("%s\n", (char *)list->next->content);
	printf("%s\n", (char *)list->next->next->content);

	ft_lstclear(&list, my_del);

	printf("\nAfter clear:\n");
	if (list == NULL)
		printf("List is NULL\n");
	else
		printf("List is NOT NULL\n");

	return (0);
}
*/
