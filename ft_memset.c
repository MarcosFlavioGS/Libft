/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:53:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/16 00:25:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (!str)
		return (NULL);
	i = 0;
	p = (unsigned char *) str;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
