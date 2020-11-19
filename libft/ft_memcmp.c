/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:12:42 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:12:44 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char *room1;
	const unsigned char *room2;

	room1 = (const unsigned char *)ptr1;
	room2 = (const unsigned char *)ptr2;
	while (n > 0)
	{
		if (*room1 != *room2)
			return (*room1 - *room2);
		room1++;
		room2++;
		n--;
	}
	return (0);
}
