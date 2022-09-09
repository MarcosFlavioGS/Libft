/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:17:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 00:27:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	size_bytes;

	size_bytes = nmemb * size;
	p = malloc(size_bytes);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, size_bytes);
	return (p);
}
