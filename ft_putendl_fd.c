/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:18:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 21:20:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char *s, int fd)
{
	if (!s || !fd)
		return ;
	t_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
