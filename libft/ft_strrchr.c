/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:09:25 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:45 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char ct;
	char *t;

	t = NULL;
	ct = (char)c;
	while (*str)
	{
		if (*str == ct)
			t = (char*)str;
		str++;
	}
	if (*str == ct)
		return ((char*)str);
	else
		return (t);
}
