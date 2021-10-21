/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:32:20 by pclark            #+#    #+#             */
/*   Updated: 2021/10/16 17:55:39 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newone;
	t_list	*end;
	t_list	*temp;

	if (!f)
		return (NULL);
	newone = NULL;
	end = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&newone, del);
			return (NULL);
		}
		ft_lstadd_back(&end, temp);
		lst = lst->next;
		if (!newone)
			newone = end;
		else
			end = end->next;
	}
	return (newone);
}
