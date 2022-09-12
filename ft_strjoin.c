/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:33:31 by coder             #+#    #+#             */
/*   Updated: 2022/09/13 01:22:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = malloc(((s1_len + s2_len) * sizeof(char)) + 1);
	if (dest)
	{
		ft_strlcpy(dest, s1, s1_len + 1);
		ft_strlcat(dest, s2, s1_len + s2_len + 1);
		return (dest);
	}
	return (NULL);
}
