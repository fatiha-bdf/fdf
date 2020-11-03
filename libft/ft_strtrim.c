/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:51:59 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/12/18 15:23:20 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	register char	*dup;
	register char	*ptr;
	register int	len;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	while (ft_isspace(*ptr))
		ptr++;
	len = ft_strlen(ptr);
	while (len && ft_isspace(ptr[len - 1]))
		len--;
	if (!(dup = (char *)malloc(sizeof(*dup) * (len + 1))))
		return (NULL);
	if (dup)
		dup[len] = '\0';
	return (dup ? ft_strncpy(dup, ptr, len) : NULL);
}
