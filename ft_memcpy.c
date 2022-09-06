/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 01:51:19 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 02:12:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	i = 0;	
	while (i < n)
	{
		*(char *)dest + i = *(char *) src + i;
		i++;
	}
	return (dest);
}
