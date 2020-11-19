/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:16:15 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 20:16:17 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*rt;

	if (s1 == NULL)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(rt = malloc(sizeof(char) * len)))
		return (0);
	ft_strlcpy(rt, s1, len);
	ft_strlcat(rt, s2, len);
	return (rt);
}
