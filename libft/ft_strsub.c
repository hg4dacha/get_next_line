/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:18:22 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/09 17:38:14 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mj;
	size_t	i;
	size_t	j;

	mj = NULL;
	i = 0;
	j = start;
	mj = (char*)malloc(sizeof(char) * len);
	if (mj == NULL)
		return (NULL);
	while (s && s[j] && i < len)
		mj[i++] = s[j++];
	mj[i] = '\0';
	return (mj);
}
