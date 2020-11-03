/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:51:46 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:23:20 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dup;
	unsigned int	i;
	char			*ss;
	int				j;

	if (s == NULL)
		return (NULL);
	ss = (char *)s;
	dup = (char *)malloc(sizeof(*s) * len + 1);
	i = start;
	j = 0;
	if (dup == NULL)
		return (NULL);
	while (*ss && i < len + start)
	{
		dup[j] = ss[i];
		i++;
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
