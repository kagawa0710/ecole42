/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:01:02 by ykagawa           #+#    #+#             */
/*   Updated: 2020/11/05 00:15:20 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# define ERR_NBR -1
# define SUC_NBR 1
# define END_NBR 0

# include "fcntl.h"
# include "sys/types.h"
# include "sys/uio.h"
# include "unistd.h"
# include "stdlib.h"

typedef struct	s_list
{
	void				*content;
	struct s_list		*next;
}				t_list;

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t	ft_strlen(const char *str);
char    *ft_strjoin(char const *s1, char const *s2);
void    *ft_memmove(void *dest, void *src, size_t n);
char    *ft_strchr(const char *str, int tg);
int		ft_new_line(char **s, char **line, int fd, int ret);
int		get_next_line(const int fd, char **line);

#endif
