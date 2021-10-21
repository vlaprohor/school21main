/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:18:29 by pclark            #+#    #+#             */
/*   Updated: 2021/10/14 16:13:15 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchar(const char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (s1 == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkchar(set, s1[start]))
		start++;
	while (end > start && ft_checkchar(set, s1[end - 1]))
		end--;
	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (0);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
