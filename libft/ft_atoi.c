/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 14:59:11 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:04 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int c;

	result = 0;
	c = 0;
	sign = 0;
	while (str[c] == '\t' || str[c] == '\v' || str[c] == '\f' ||
			str[c] == '\r' || str[c] == ' ' || str[c] == '\n')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = 1;
		c++;
	}
	while (str[c] <= '9' && str[c] >= '0')
	{
		result = result * 10 + (str[c] - 48);
		c++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}
