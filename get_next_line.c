/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/05 21:49:08 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strnlen(char *str, char c)
{
	int j;

	j = 0;
	while (str[j] != '\0' && str[j] != c)
		j++;
	return (j);
}

int	get_next_line(const int fd, char **line)
{
	int					read_return;
	char				stock[BUFF_SIZE + 1];
	static char			*dest;
	int					i;

	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);
	if (dest == NULL)
		dest = (char*)malloc(sizeof(char));
	while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		dest = ft_strjoin(dest, stock);
		if (ft_strchr(dest, '\n') != NULL)
			break;
	}
	if (read_return <= 0 && ft_strlen(dest) == 0)
		return (read_return);
	i = ft_strnlen(dest, '\n');
	*line = ft_strsub(dest, 0, i);
	if (dest[i] != '\0')
		dest = ft_strcpy(dest, (dest + i) + 1);
	else
		free(&dest);
	return (1);
}
