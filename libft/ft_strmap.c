/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <hgadacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:08:25 by hgadacha          #+#    #+#             */
/*   Updated: 2019/06/22 17:07:25 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*tab;
	unsigned int	c;

	c = 0;
	if (s)
	{
		tab = ft_strnew(ft_strlen(s));
		if (tab == NULL)
			return (0);
		while (s[c] != '\0')
		{
			tab[c] = f(s[c]);
			c++;
		}
		return (tab);
	}
	return (NULL);
}
