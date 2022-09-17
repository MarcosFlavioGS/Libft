/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:17:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/17 02:08:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	size_bytes;

	if (!size || !nmemb)
		return (malloc(0));
	if (size > 2147483647 / nmemb)
		return (NULL);
	size_bytes = nmemb * size;
	p = malloc(size_bytes);
	if (p == NULL)
		return (p);
	ft_bzero(p, size_bytes);
	return (p);
}
