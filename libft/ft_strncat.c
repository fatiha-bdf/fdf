/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:49:48 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:23:20 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		len1;
	size_t	i;

	len1 = 0;
	i = 0;
	while (s1[len1])
	{
		len1++;
	}
	while (s2[i] && i < n)
	{
		s1[len1] = s2[i];
		len1++;
		i++;
	}
	s1[len1] = '\0';
	return (s1);
}
