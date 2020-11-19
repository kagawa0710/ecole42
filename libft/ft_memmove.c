/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:13:21 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:13:24 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
