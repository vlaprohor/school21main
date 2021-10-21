/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:11:56 by pclark            #+#    #+#             */
/*   Updated: 2021/10/14 18:11:16 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			i = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (i);
}
