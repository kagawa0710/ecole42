/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:53:03 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 18:53:05 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	while (n)
	{
		*(char *)dest++ = *(char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (dest);
		n--;
	}
	return (0);
}
