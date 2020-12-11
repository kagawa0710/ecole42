/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:00:55 by ykagawa           #+#    #+#             */
/*   Updated: 2020/11/05 00:15:45 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t index;

	index = 0;
	while (index < size && *dest)
	{
		dest++;
		index++;
	}
	while (index + 1 < size && *src)
	{
		*dest++ = *src++;
		index++;
	}
	if (index < size)
		*dest = 0;
	while (*src)
	{
		index++;
		src++;
	}
	return (index);
}

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while ((i + 1 < size) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int tg)
{
	while (*str != (unsigned char)tg)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (char *)str;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*rt;

	if (s1 == NULL)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(rt = malloc(sizeof(char) * len)))
		return (0);
	ft_strlcpy(rt, s1, len);
	ft_strlcat(rt, s2, len);
	return (rt);
}

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
