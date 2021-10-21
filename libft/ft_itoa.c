/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:49:11 by pclark            #+#    #+#             */
/*   Updated: 2021/10/16 15:24:10 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n / 10 > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	long int	newn;

	newn = n;
	i = ft_countdigits(newn);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	res[i--] = '\0';
	if (newn == 0)
		res[0] = '0';
	if (newn < 0)
	{
		res[0] = '-';
		newn *= -1;
	}
	while (newn > 0)
	{
		res[i--] = newn % 10 + '0';
		newn /= 10;
	}
	return (res);
}
