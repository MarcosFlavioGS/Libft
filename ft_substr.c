/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:27:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/16 02:46:52 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		d_len;
	char		*dest;
	size_t		i;

	d_len = len - start;
	dest = (char *) malloc(sizeof(char) * (d_len + 1));
	if (!dest)
	{
		return (NULL);
	}
	i = start;
	while (i < len && (*(s + i) != '\0'))
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
