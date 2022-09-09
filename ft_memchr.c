/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:00:56 by coder             #+#    #+#             */
/*   Updated: 2022/09/09 01:48:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;
	size_t			i;

	i = 0;
	sp = (unsigned char *) s;
	while (i < n)
	{
		if (*(sp + i) == (unsigned char) c)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
