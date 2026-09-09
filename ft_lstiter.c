/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:32:38 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 11:32:54 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*list;
	t_list	*node2;
	t_list	*node3;

	list = ft_lstnew("Hello");
	node2 = ft_lstnew("World");
	node3 = ft_lstnew("42");

	list->next = node2;
	node2->next = node3;

	printf("List contents:\n");
	ft_lstiter(list, print_content);

	return (0);
}
*/