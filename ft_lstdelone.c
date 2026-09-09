/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:11:32 by luci              #+#    #+#             */
/*   Updated: 2026/09/08 13:32:43 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	my_del(void *content)
{
	printf("Deleting content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*node;
	char	*str;

	str = malloc(20);
	if (str == NULL)
		return (1);

	sprintf(str, "Hello 42");

	node = ft_lstnew(str);
	if (node == NULL)
	{
		free(str);
		return (1);
	}

	printf("Before deletion:\n");
	printf("Content: %s\n", (char *)node->content);

	ft_lstdelone(node, my_del);

	printf("Node deleted successfully.\n");

	return (0);
}
*/