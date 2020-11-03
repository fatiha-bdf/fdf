/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:49:30 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:23:20 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*dup;
	unsigned int	i;

	i = 0;
	if (f != NULL && s != NULL)
	{
		dup = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (dup == NULL)
			return (NULL);
		while (*s)
		{
			dup[i] = f(*s);
			s++;
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (NULL);
}
