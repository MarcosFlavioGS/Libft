/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:36:10 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 22:06:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 >= c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
