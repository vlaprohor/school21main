/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:40:45 by pclark            #+#    #+#             */
/*   Updated: 2021/10/14 16:22:57 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	k;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= dstsize)
		return (len_src + dstsize);
	i = 0;
	k = len_dst;
	while (k < (dstsize - 1) && src[i] != '\0')
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (len_dst + len_src);
}
