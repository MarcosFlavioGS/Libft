/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:27:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/23 01:20:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (s + start > s + ft_strlen(s))
	{
		dest = malloc(1);
		*dest = '\0';
		return (dest);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	dest = (char *) malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
