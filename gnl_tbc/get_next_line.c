/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:01:07 by ykagawa           #+#    #+#             */
/*   Updated: 2020/11/19 09:40:27 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strjoin_arr(char const *s1, char const *s2, size_t s2_nl_len)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*rt;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + s2_nl_len;
	if (!(rt = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
		rt[j++] = s1[i++];
	i = 0;
	while (i < s2_nl_len)
		rt[j++] = s2[i++];
	rt[j] = '\0';
	return (rt);
}

static int	get_line(int fd, char **buf, char **line)
{
	char	*p;
	int		len;

	p = ft_strchr(*buf, '\n');
	if (!(*line = ft_strjoin_arr(*line, *buf, p - *buf)))
		return (ERR_NBR);
	if (*p == '\n')
	{
		*buf = ft_memmove(*buf, p + 1, *ft_strchr(p + 1, '\0'));
		return (SUC_NBR);
	}
	if ((len = read(fd, *buf, BUFF_SIZE)) < 0)
		return (ERR_NBR);
	(*buf)[len] = '\0';
	//printf("aaa");
	return (len == 0 ? END_NBR : get_line(fd, buf, line));
}

int			get_next_line(int fd, char **line)
{
	static char	*buf[1024];
	int			result;
	
	if (fd < 3 || BUFF_SIZE < 1 || line == NULL || !(*line = (char *)malloc(1)))
		return (ERR_NBR);
	*line[0] = '\0';
	if (!buf[fd] && !(buf[fd] = malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (ERR_NBR);
	if ((result = get_line(fd, &buf[fd], line)) != SUC_NBR)
	{
		free(buf[fd]);
		buf[fd] = NULL;
	}
	return (result);
}
