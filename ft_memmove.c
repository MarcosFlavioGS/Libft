/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:58:00 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 00:01:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	char		*dest_p;
	const char	*src_p;

	dest_p = (char *) dest;
	src_p = (const char *) src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dest_p[n] = src_p[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
