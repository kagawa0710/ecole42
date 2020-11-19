/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:16:06 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:16:08 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*rt;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	if (!(rt = malloc(sizeof(char) * len + 1)))
		return (0);
	while (str[i])
	{
		rt[i] = str[i];
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
