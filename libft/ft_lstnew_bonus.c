/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:02:39 by pclark            #+#    #+#             */
/*   Updated: 2021/10/16 17:56:11 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newone;

	newone = malloc(sizeof (t_list));
	if (!newone)
		return (0);
	newone->content = content;
	newone->next = 0;
	return (newone);
}
