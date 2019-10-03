/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:02:15 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:19 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		free(*alst);
		*alst = NULL;
	}
}
