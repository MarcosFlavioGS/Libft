/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:27:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 22:59:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		d_len;
	char	*dest;
	int		i;

	d_len = len - start;
	dest = (char *) malloc(sizeof(char) * (d_len + 1));
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
