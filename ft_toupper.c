/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:06:18 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 00:07:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int argument)
{
	if (argument >= 'a' && argument <= 'z')
	{
		argument -= 32;
	}
	return (argument);
}