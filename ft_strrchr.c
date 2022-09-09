/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:16:46 by coder             #+#    #+#             */
/*   Updated: 2022/09/09 02:02:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			return ((char *) &s[i]);
		}
		else
			i--;
	}
	return ((void *) NULL);
}
