/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:53:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 00:53:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Hello world";
	char*	src = ft_memset(str, '$', 4);
	printf("%s\n", src);
	return (0);
}
