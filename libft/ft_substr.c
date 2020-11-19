/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:17:55 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/26 12:05:10 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *rt;

	if (s == NULL)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (!(rt = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	ft_memcpy(rt, s + start, len);
	rt[len] = '\0';
	return (rt);
}
