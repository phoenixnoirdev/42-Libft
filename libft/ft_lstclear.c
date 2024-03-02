/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:09:06 by phkevin           #+#    #+#             */
/*   Updated: 2024/02/28 13:09:08 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lsttmp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		lsttmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = lsttmp;
	}
}
