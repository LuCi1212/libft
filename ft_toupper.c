/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:36:31 by winhein           #+#    #+#             */
/*   Updated: 2026/09/09 20:36:32 by winhein          ###   ########.fr       */
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
