/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 01:42:03 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 02:38:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

static void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	ft_reverse(char str[], int len)
{
	int	i;
	int	j;
	while (i < j)
	{
		ft_swap((str + i), (str + j));
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	size_t		i;
	long int	rem;
	int			sign;
	char		*str;

	i = 0;
	sign = 0;
	if (n == 0)
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	if (n < 0)
		sign = 1;
		n *= -1;
	while (n != 0)
	{
		rem = n % 10;
		str[i++] = rem + '0';
		n = n / 10;
	}
	if (sign)
		str[i++] = '-';
	str[i] = '\0';
	ft_reverse(str, i);
	return (str);
}

int	main(void)
{
	int n = 4564;

	printf("%s\n", ft_itoa(n));
	return (0);
}
