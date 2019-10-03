/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:03:44 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:30 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)s1;
	d = (unsigned char*)s2;
	while (n > 0 && *s == *d)
	{
		s++;
		d++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s - *d);
}
