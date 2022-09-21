/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:42:49 by coder             #+#    #+#             */
/*   Updated: 2022/09/21 22:51:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*l_cpy;

	l_cpy = lst;
	if (!l_cpy)
		return (NULL);
	while (l_cpy->next)
	{
		l_cpy = l_cpy->next;
	}
	return (l_cpy);
}
