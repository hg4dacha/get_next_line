/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:07:00 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:59 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char i;

	i = (char)c;
	while (*s != '\0' && *s != c)
		s++;
	if (*s != i)
		return (NULL);
	return ((char*)s);
}
