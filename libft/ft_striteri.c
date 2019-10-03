/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:07:56 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:13 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int c;

	c = 0;
	if (s != NULL && f != NULL)
	{
		while (s[c])
		{
			(f)(c, &s[c]);
			c++;
		}
	}
}
