/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:03:54 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:32 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t length)
{
	char		*dest;
	const char	*str;
	int			c;

	c = 0;
	dest = dst;
	str = src;
	while (length)
	{
		dest[c] = str[c];
		c++;
		length--;
	}
	return (dest);
}
