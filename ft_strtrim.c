/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:25:34 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 00:18:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	is_space(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] != c)
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 && set)
	{
		while (is_space(s1[i], set) != 0)
		{
			i++;
		}
		j = ft_strlen(s1);
		while (is_space(s1[j], set) != 0)
		{
			j--;
		}
		dest = (char *) malloc(j - i) * sizeof(char) + 1;
		if (dest)
			ft_strlcpy(dest, &s1[i], (j - i + 1));
			return (dest);
		else
			return (NULL);
	}
	return (NULL);
}
