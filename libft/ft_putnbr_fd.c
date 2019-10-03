/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:05:44 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:47 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int c;

	c = n;
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		c = -c;
	}
	if (c > 9)
	{
		ft_putnbr_fd((c / 10), fd);
		ft_putnbr_fd((c % 10), fd);
	}
	else
		ft_putchar_fd((c + '0'), fd);
}
