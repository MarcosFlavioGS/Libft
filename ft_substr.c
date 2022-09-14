/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:27:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 22:21:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		d_len;
	char	*dest;
	int		i;

	d_len = len - start;
	dest = (char *) malloc(sizeof(char) * (d_len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = start;
	while (i < len && (*(s + i) != '\0'))
	{
		*dest = *(s + i);
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest - d_len);
}
