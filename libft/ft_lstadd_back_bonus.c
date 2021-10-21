/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:33:00 by pclark            #+#    #+#             */
/*   Updated: 2021/10/16 16:35:14 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iterator;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	iterator = *lst;
	while (iterator->next)
		iterator = iterator->next;
	iterator->next = new;
}
