/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:53:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 02:29:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *) str + i = (unsigned char) c;
		i++;
	}
	return (str);
}