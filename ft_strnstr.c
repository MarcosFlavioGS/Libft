/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:34:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/17 03:22:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_size;

	i = 0;
	little_size = ft_strlen(little);
	if (!little_size)
		return ((char *) big);
	if (!len)
		return (NULL);
	while (big[i] && i + little_size <= len)
	{
		if (!ft_strncmp(&big[i], little, little_size))
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
