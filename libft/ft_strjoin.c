/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:48:53 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/20 10:38:26 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*dup;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	dup = (char *)malloc(sizeof(*s1) * len + 1);
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (*s1)
	{
		dup[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		dup[i] = *s2;
		s2++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
