/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:48:47 by luci              #+#    #+#             */
/*   Updated: 2026/08/26 16:13:10 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
#include <unistd.h>
int main(){
	char a = ft_toupper('a');
	char z = ft_toupper('Z');
	char one = ft_toupper('1');
	char A = ft_toupper('A');
	write(1, &a, 2);
	write(1, &z, 1);
	write(1, &one, 1);
	write(1, &A, 1);
	return (0);
}
*/
