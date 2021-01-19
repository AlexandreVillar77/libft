/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:38:38 by avillar           #+#    #+#             */
/*   Updated: 2021/01/08 11:28:00 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst == 0 || f == 0)
		return (0);
	if (!(new = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&new, del);
		free(new);
		return (0);
	}
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new);
}
