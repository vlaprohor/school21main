/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:51:44 by pclark            #+#    #+#             */
/*   Updated: 2021/10/13 17:55:20 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	res = malloc ((sizeof(char)) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			res[j++] = s[i];
		i++;
	}
	res[j] = '\0';
	return (res);
}
