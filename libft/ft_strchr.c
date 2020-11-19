/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:15:55 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:15:57 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
