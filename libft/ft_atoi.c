/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:24:04 by pclark            #+#    #+#             */
/*   Updated: 2021/10/14 18:02:54 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char str)
{
	if (str == '\t' || str == '\n' || str == '\v')
		return (1);
	else if (str == '\f' || str == '\r' || str == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	x;

	x = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] > 47 && str[i] < 58)
	{
		while (str[i] > 47 && str [i] < 58)
		{
			x = x * 10 + str[i] - '0';
			i++;
		}
		return (x * sign);
	}
	return (0);
}
