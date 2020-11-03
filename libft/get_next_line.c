/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 13:15:57 by fboudyaf          #+#    #+#             */
/*   Updated: 2019/03/12 17:43:21 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int			strchr_len(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char			*ft_strjoin_free(char *buffer, char *str)
{
	char *tmp;

	tmp = str;
	str = ft_strjoin(str, buffer);
	ft_strdel(&tmp);
	return (str);
}

static int			return_line(char *buffer, char **line, char *str)
{
	if (ft_strchr(buffer, '\n') == NULL)
	{
		*line = ft_strdup(str);
		ft_strdel(&str);
		return (1);
	}
	(ft_strchr(buffer, '\n'))[0] = '\0';
	str = ft_strjoin_free(buffer, str);
	buffer[ft_strlen(buffer)] = '\n';
	*line = ft_strdup(str);
	ft_strdel(&str);
	return (1);
}

static int			create_line(int fd, char *buffer, char **line, size_t *i)
{
	char	*str;
	int		bytes;

	bytes = ft_strlen(buffer);
	if (!(str = ft_strdup("")))
		return (-1);
	if (bytes == 0)
	{
		ft_strdel(&str);
		return (0);
	}
	while (ft_strchr(&buffer[*i], '\n') == NULL)
	{
		str = ft_strjoin_free(&buffer[*i], str);
		if (bytes < BUFF_SIZE)
			return (return_line(&buffer[*i], line, str));
		bytes = read(fd, buffer, BUFF_SIZE);
		buffer[bytes] = '\0';
		*i = 0;
	}
	return (return_line(&buffer[*i], line, str));
}

int					get_next_line(const int fd, char **line)
{
	static t_point	buf;
	int				bytes;

	if (buf.buffer)
		buf.i = buf.i + strchr_len(&buf.buffer[buf.i], '\n') + 1;
	if (buf.i == 0 || buf.i >= ft_strlen(buf.buffer))
	{
		buf.i = 0;
		if (fd < 0 || !line || (!buf.buffer &&
				!(buf.buffer = ft_strnew(BUFF_SIZE))))
			return (-1);
		if ((bytes = read(fd, buf.buffer, BUFF_SIZE)) < 0)
			return (-1);
		buf.buffer[bytes] = '\0';
	}
	return (create_line(fd, buf.buffer, line, &(buf.i)));
}
