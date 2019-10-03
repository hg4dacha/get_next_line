/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:01:49 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:16 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	testneg(int nb)
{
	if (nb < 0)
		nb = nb * -1;
	return (nb);
}

char		*ft_itoa(int nbr)
{
	int len;
	int tmp;
	char*tab;

	len = nbr <= 0;
	tmp = nbr;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	if (!(tab = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (nbr == 0)
		tab[0] = '0';
	else if (nbr < 0)
		tab[0] = '-';
	tab[len] = 0;
	while (nbr != 0)
	{
		tab[--len] = '0' + testneg(nbr % 10);
		nbr /= 10;
	}
	return (tab);
}
