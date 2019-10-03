/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:06:05 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:49 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long int c;

	c = nb;
	if (c < 0)
	{
		ft_putchar('-');
		c = -c;
	}
	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
		ft_putchar(c + '0');
}
