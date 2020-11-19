/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykagawa <ykagawa@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:29:21 by ykagawa           #+#    #+#             */
/*   Updated: 2020/10/12 18:29:23 by ykagawa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mover;

	if (!*lst)
		*lst = new;
	mover = *lst;
	while (mover->next != NULL)
		mover = mover->next;
	mover->next = new;
	new->next = NULL;
}
