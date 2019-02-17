/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:43:40 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/17 20:36:50 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*fresh_start;
	t_list	*prev;

	if (lst)
	{
		fresh = ft_lstnew(lst->content, lst->content_size);
		fresh = f(fresh);
		if (fresh)
			fresh_start = fresh;
		else
			return (NULL);
		prev = fresh;
		lst = lst->next;
	}
	while (lst)
	{
		fresh = ft_lstnew(lst->content, lst->content_size);
		fresh = f(fresh);
		prev->next = fresh;
		prev = prev->next;
		lst = lst->next;
	}
	return (fresh_start);
}
