/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:06:46 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:06:56 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i + 1] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) &&
				(str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
