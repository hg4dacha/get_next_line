/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:08:39 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:28 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while (n && src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
		n--;
	}
	dest[c + i] = '\0';
	return (dest);
}
