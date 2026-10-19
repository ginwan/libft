/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:31:54 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/18 11:46:04 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	new_node = ft_lstnew(content);
	if (!new_node)
		return (NULL);
	new_lst = new_node;
	while (lst->next)
	{
		lst = lst->next;
		content = f(lst->content);
		new_node->next = ft_lstnew(content);
		if (!(new_node->next))
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = new_node->next;
	}
	return (new_lst);
}
