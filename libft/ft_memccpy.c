/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:03:17 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:27 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *dt;
	char *str;

	dt = dest;
	str = (char*)src;
	while (n)
	{
		(*dt++) = (*str);
		if ((*str++) == (char)c)
			return (dt);
		n--;
	}
	return (NULL);
}
