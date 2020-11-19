/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:13:34 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/21 20:32:05 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int tg, size_t n)
{
	void	*rt;
	size_t	i;

	i = 0;
	rt = p;
	while (i < n)
	{
		*(char*)p++ = tg;
		i++;
	}
	return (rt);
}
