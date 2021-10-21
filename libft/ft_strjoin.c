/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:05:55 by pclark            #+#    #+#             */
/*   Updated: 2021/10/14 18:35:13 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return (0);
	res = malloc (sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	i = 0;
	while (*s1 != '\0')
		res[i++] = *s1++;
	while (*s2 != '\0')
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}
