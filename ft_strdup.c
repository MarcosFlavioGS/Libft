/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:32:15 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 22:19:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_size;
	char	*dup;

	s_size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * s_size + 1);
	if (dup == NULL)
		return ((char *) NULL);
	while (*s)
	{
		*dup = *s;
		sup++;
		s++;
	}
	*dup = '\0';
	return (dup);
}
