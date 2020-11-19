/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:13:07 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/23 15:16:03 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*rt;
	size_t			i;

	if (!dest && !src)
		return (0);
	rt = dest;
	i = 0;
	while (i < n)
	{
		*(char*)dest++ = *(char*)src++;
		i++;
	}
	return (rt);
}
