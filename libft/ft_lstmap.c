/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 00:39:26 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/24 00:42:40 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*newlst;
	t_list		*list;

	if (!lst || !f)
		return (NULL);
	list = f(lst);
	newlst = list;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		if (!(list->next))
			return (NULL);
		list = list->next;
	}
	return (newlst);
}
