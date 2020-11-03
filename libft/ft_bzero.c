/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 00:22:13 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:25:54 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*cast;
	size_t			i;

	i = 0;
	cast = (unsigned char *)str;
	while (i < n)
	{
		cast[i] = 0;
		i++;
	}
}
