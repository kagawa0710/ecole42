/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:53:26 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:12:58 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int tg, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)p == (unsigned char)tg)
			return ((void*)p);
		p++;
	}
	return (NULL);
}
