/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:16:26 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:16:29 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
