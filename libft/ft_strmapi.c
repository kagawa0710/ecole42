/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:17:07 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:17:08 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	size_t	len;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	if (!(rt = malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len)
	{
		rt[i] = f(i, s[i]);
		i++;
	}
	rt[len] = '\0';
	return (rt);
}
