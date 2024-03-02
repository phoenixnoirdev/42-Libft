/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:07:52 by phkevin           #+#    #+#             */
/*   Updated: 2024/02/28 14:07:54 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	lstmp = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(&lstmp, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	if (lstmp == NULL)
	{
		del(lstmp);
		return (NULL);
	}
	return (lstmp);
}
