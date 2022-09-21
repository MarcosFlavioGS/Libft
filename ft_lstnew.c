/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:05:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/21 21:46:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	head = NULL;
	head = (t_list) malloc(sizeof(t_list));
	if (!head)
	{
		return (NULL);
	}
	head->content = content;
	head->next = NULL;
	return (head);
}
