/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:57:57 by pclark            #+#    #+#             */
/*   Updated: 2021/10/19 16:51:45 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	if (!len)
		return (0);
	i = 0;
	while (haystack[i] && i <= len - nlen)
	{
		if (!(ft_strncmp(haystack + i, needle, nlen)))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
