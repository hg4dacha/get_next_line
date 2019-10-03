/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:03:33 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:29 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *des;

	des = (unsigned char*)s;
	while (n > 0 && *des != (unsigned char)c)
	{
		des++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (des);
}
