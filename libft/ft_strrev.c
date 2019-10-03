/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:09:31 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:46 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	swap;
	int		j;
	int		c;

	j = 0;
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	while (c > j)
	{
		swap = str[c];
		str[c] = str[j];
		str[j] = swap;
		c--;
		j++;
	}
	return (str);
}
