/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:25:34 by coder             #+#    #+#             */
/*   Updated: 2022/09/13 01:55:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	s1_len;

	s1_len = ft_strlen(s1)
	dest = malloc((s1_len * sizeof(char)) - 1);
	while (*s1)
	{

	}
	return (dest);
}
