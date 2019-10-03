/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:08:48 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:29 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (*s1 && *s2 && *s1 == *s2 && size)
	{
		s1++;
		s2++;
		size--;
	}
	if (0 == size)
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
