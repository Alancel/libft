/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:23:24 by alancel           #+#    #+#             */
/*   Updated: 2020/10/30 23:07:22 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!lst && !del && !*lst)
		return ;
	while (lst && *lst)
	{
		list = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = list;
	}
}
