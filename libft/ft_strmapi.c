/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:49:37 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:23:20 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dup;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		dup = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
		if (dup == NULL)
			return (NULL);
		while (s[i])
		{
			dup[j] = f(i, s[i]);
			i++;
			j++;
		}
		dup[j] = '\0';
		return (dup);
	}
	return (NULL);
}
