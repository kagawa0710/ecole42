/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:17:35 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/25 17:44:49 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int tg)
{
	size_t len;

	len = ft_strlen(str);
	while (len != 0 && *(str + len) != tg)
		len--;
	if (*(str + len) == tg)
		return (char *)(str + len);
	return (NULL);
}
