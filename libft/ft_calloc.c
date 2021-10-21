/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:42:55 by pclark            #+#    #+#             */
/*   Updated: 2021/10/12 18:31:14 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			i;

	res = malloc(size * count);
	if (!res)
		return (0);
	i = 0;
	while (i < (size * count))
		res[i++] = 0;
	return (res);
}
