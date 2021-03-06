/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:27:07 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 18:27:17 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *p, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char*)p++ = 0;
		i++;
	}
}
