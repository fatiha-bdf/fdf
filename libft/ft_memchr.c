/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:44:17 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:25:54 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	int				i;

	i = 0;
	str1 = (unsigned char*)str;
	while (n--)
	{
		if (str1[i] == (unsigned char)c)
			return (str1 + i);
		i++;
	}
	return (NULL);
}
