/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 13:07:49 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:25:54 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		find_digit_nb(int n)
{
	int	digit_nb;

	digit_nb = 1;
	if (n < 0)
		digit_nb = 2;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		digit_nb++;
	}
	return (digit_nb);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		dig_nb;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dig_nb = find_digit_nb(n);
	if (!(str = (char *)malloc(sizeof(*str) * dig_nb + 1)))
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = -n;
		str[0] = '-';
	}
	str[dig_nb--] = '\0';
	while (dig_nb > neg)
	{
		str[dig_nb--] = (n % 10) + 48;
		n = n / 10;
	}
	str[neg] = n + 48;
	return (str);
}
