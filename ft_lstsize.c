/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:29:13 by coder             #+#    #+#             */
/*   Updated: 2022/09/21 22:39:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*l_cpy;

	l_cpy = lst;
	count = 0;
	if (!l_cpy)
		return (0);
	while (!l_cpy)
	{
		count++;
		l_cpy = l_cpy->next;
	}
	return (count);
}
