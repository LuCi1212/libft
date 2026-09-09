/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luci <luci@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 01:27:47 by luci              #+#    #+#             */
/*   Updated: 2026/09/05 20:20:17 by luci             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] && check(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while ((j > i) && check(s1[j - 1], set))
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return ((char *)str);
}
/*
#include "stdio.h"
int	main(void)
{
	char const *str1 = "hello_heheheheehehe";
	char const *str2 = "he";

	printf("%s\n", ft_strtrim(str1, str2));
}
*/