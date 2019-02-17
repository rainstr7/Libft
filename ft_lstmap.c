/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:43:40 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/17 13:15:09 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p_list;
	t_list	*p_list2;
	t_list	*new_list;
	t_list	*new_list2;

	p_list = lst;
	while (p_list)
	{
		f(p_list);
		p_list = p_list->next;
	}
	new_list = ft_lstnew(lst->content, lst->content_size);
	if (new_list == NULL)
		return (NULL);
	p_list2 = new_list;
	while (lst->next)
	{
		new_list2 = ft_lstnew((lst->next)->content, (lst->next)->content_size);
		if (new_list2 == NULL)
			return (NULL);
		new_list->next = new_list2;
		lst = lst->next;
	}
	return (p_list2);
}
