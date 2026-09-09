/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:37:43 by luci              #+#    #+#             */
/*   Updated: 2026/09/09 12:33:28 by winhein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*content;

	if (f == NULL || lst == NULL || del == NULL)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (temp == NULL)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	*double_number(void *content)
{
	int	*number;
	int	*result;

	number = (int *)content;
	result = malloc(sizeof(int));
	if (result == NULL)
		return (NULL);
	*result = *number * 2;
	return (result);
}

void	delete_number(void *content)
{
	free(content);
}

void	print_number(void *content)
{
	printf("%d ", *(int *)content);
}

int	main(void)
{
	t_list	*list;
	t_list	*new_list;
	int		*a;
	int		*b;
	int		*c;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));

	*a = 10;
	*b = 20;
	*c = 30;

	list = ft_lstnew(a);
	list->next = ft_lstnew(b);
	list->next->next = ft_lstnew(c);

	printf("Original list: ");
	ft_lstiter(list, print_number);
	printf("\n");

	new_list = ft_lstmap(list, double_number, delete_number);

	printf("New list: ");
	ft_lstiter(new_list, print_number);
	printf("\n");

	ft_lstclear(&list, delete_number);
	ft_lstclear(&new_list, delete_number);

	return (0);
}
*/
