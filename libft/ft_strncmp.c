/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:17:16 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:17:18 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char str1;
	unsigned char str2;

	while (n > 0)
	{
		str1 = *(unsigned char *)s1++;
		str2 = *(unsigned char *)s2++;
		if (str1 != str2)
			return (str1 - str2);
		if (str1 == '\0')
			return (0);
		n--;
	}
	return (0);
}
