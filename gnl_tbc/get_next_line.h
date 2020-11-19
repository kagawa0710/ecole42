/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:01:02 by ykagawa           #+#    #+#             */
/*   Updated: 2020/11/19 09:32:58 by ykagawa          ###   ########.fr       */
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
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
	void				*content;
	struct s_list		*next;
}				t_list;

int		get_next_line(const int fd, char **line);
int		ft_new_line(char **s, char **line, int fd, int ret);
size_t  ft_strlen(const char *str);
size_t  ft_strcpy_arr(char *dest, const char *s1, const char *s2);
char	*ft_strjoin_arr(char const *s1, char const *s2, size_t s2_newline_len);
void    *ft_memmove(void *dest, void *src, size_t n);
char    *ft_strchr(const char *str, int tg);

#endif
