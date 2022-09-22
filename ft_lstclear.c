/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:15:04 by coder             #+#    #+#             */
/*   Updated: 2022/09/22 20:53:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	if (lst)
	{
		while (*lst)
		{
			new = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = new;
		}
		*lst = 0;
	}
}
