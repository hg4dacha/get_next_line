/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:04:17 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:34 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *des;
	char *str;

	des = (char*)dest;
	str = (char*)src;
	if (des > str)
	{
		des = des + n - 1;
		str = str + n - 1;
		while (n > 0)
		{
			*des-- = *str--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*des++ = *str++;
			n--;
		}
	}
	return (dest);
}
