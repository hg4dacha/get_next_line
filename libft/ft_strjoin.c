/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:29:09 by hgadacha          #+#    #+#             */
/*   Updated: 2019/08/05 17:04:00 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		size;
	int		i;
	int		j;

	tab = NULL;
	size = 0;
	i = 0;
	j = 0;
	size = strlen(s1) + strlen(s2);
	tab = (char *)malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (NULL);
	while (s1 && s1[i])
		tab[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i])
		tab[j++] = s2[i++];
	tab[j] = '\0';
	return (tab);
}
