/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:14:10 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 00:24:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == (unsigned char) c)
		{
			return ((char *) &s[i]);
		}
		else
			i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return ((void *) NULL);
}