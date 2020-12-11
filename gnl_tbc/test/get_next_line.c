/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:01:07 by ykagawa           #+#    #+#             */
/*   Updated: 2020/11/05 00:25:13 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			get_line(int fd, char **buf, char **line)
{
	char	*p;
	int		len;

	p = ft_strchr(*buf, '\n');
	if (*p == '\n')
	{
		*buf = p - *buf;
		if (!(*line = ft_strjoin(*line, *buf))) //ft_strjoin(*line, *buf, p - *buf)
			return (ERR_NBR);
	}
	else
	{
		if (!(*line = ft_strjoin(*line, *buf))) //ft_strjoin(*line, *buf, p - *buf)
			return (ERR_NBR);
	}
	if (*p == '\n')
	{
		*buf = ft_memmove(*buf, p + 1, ft_strchr(p + 1, '\0') - p);
		return (SUC_NBR);
	}
	if ((len = read(fd, *buf,  BUFF_SIZE)) < 0)
		return (ERR_NBR);
	(*buf)[len] = '\0';
	return (len == 0 ? END_NBR : get_line(fd, buf, line));
}

int					get_next_line(int fd, char **line)
{
	static char	*buf[1024];
	int			result;

	if (fd < 3 || BUFF_SIZE < 1 || line == NULL || !(*line = (char *)malloc(1)))
		return (ERR_NBR);
	*line[0] = '\0';
	if (!buf[fd] && !(buf[fd] = malloc(( BUFF_SIZE + 1) * sizeof(char))))
		return (ERR_NBR);
	if ((result = get_line(fd, &buf[fd], line)) != SUC_NBR)
	{
		free(buf[fd]);
		buf[fd] = NULL;
	}
	return (result);
}
