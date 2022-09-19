/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:25:35 by coder             #+#    #+#             */
/*   Updated: 2022/09/20 00:40:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_rev_swap(char *s, int len)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		if (s[i] != '-' && s[j] != '-')
		{
			tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
			i++;
			j--;
		}
		else
			i++;
	}
}

static int	mod_numlen(int num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*str;

	temp = n;
	str = (char *) malloc(sizeof(char) * (mod_numlen(temp) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n == 0)
		str[i++] = '0';
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = '\0';
	ft_rev_swap(str, i);
	return (str);
}
