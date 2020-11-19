/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:17:27 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:17:28 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t len;

	if (*to_find == '\0')
		return (char *)str;
	len = ft_strlen(to_find);
	while (*str && n >= len)
	{
		if (*str == *to_find && ft_strncmp(str, to_find, len) == 0)
			return (char *)str;
		str++;
		n--;
	}
	return (0);
}
