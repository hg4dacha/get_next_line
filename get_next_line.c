/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/05 23:37:20 by hgadacha         ###   ########.fr       */
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
	static char			*dest[OPEN_MAX];
	int					i;

	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);
	if (dest[fd] == NULL)
	{
		dest[fd] = (char*)malloc(sizeof(char));
		if (dest[fd] == NULL)
			return (-1);
	}
		while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		dest[fd] = ft_strjoin(dest[fd], stock);
		if (ft_strchr(dest[fd], '\n') != NULL)
			break;
	}
	if (read_return <= 0 && ft_strlen(dest[fd]) == 0)
		return (read_return);
	i = ft_strnlen(dest[fd], '\n');
	*line = ft_strsub(dest[fd], 0, i);
	if (dest[fd][i] != '\0')
		dest[fd] = ft_strcpy(dest[fd], (dest[fd] + i) + 1);
	else
		free(&dest[fd]);
	return (1);
}
