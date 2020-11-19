/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:00:55 by ykagawa           #+#    #+#             */
/*   Updated: 2020/11/08 17:55:06 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	void	*rt;

	if (!dest && !src)
		return (0);
	rt = dest;
	if (src < dest)
	{
		src += n;
		dest += n;
		while (n)
		{
			*(char *)--dest = *(char *)--src;
			n--;
		}
	}
	else
	{
		while (n)
		{
			*(char *)dest++ = *(char *)src++;
			n--;
		}
	}
	return (rt);
}

char    *ft_strchr(const char *str, int tg)
{
    while (*str != (unsigned char)tg)
    {
        if (*str == '\0')
            return (char *)str;
            str++;
    }
    return (char *)str;
}

size_t  ft_strlen(const char *str)
{
    int     i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}
