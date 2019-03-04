/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:43:40 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/04 12:23:58 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*list_start;
	t_list	*rev;

	if (lst)
	{
		list = ft_lstnew(lst->content, lst->content_size);
		list = f(list);
		if (list)
			list_start = list;
		else
			return (NULL);
		rev = list;
		lst = lst->next;
	}
	while (lst)
	{
		list = ft_lstnew(lst->content, lst->content_size);
		list = f(list);
		rev->next = list;
		rev = rev->next;
		lst = lst->next;
	}
	return (list_start);
}
