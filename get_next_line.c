/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/15 17:25:41 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int						ft_strnlen(char *str, char c)
{
	int					i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

int						ft_affect(char **dest, char **line)
{
	int					index;

	index = ft_strnlen((*dest), '\n');
	if (!((*line) = ft_strsub(*dest, 0, index)))
		return (-1);
	if ((*dest)[index] != '\0')
		(*dest) = ft_strcpy((*dest), ((*dest) + index) + 1);
	else
		ft_strdel(dest);
	return (1);
}

int						get_next_line(const int fd, char **line)
{
	int					read_return;
	static char			*dest[OPEN_MAX];
	char				stock[BUFF_SIZE + 1];
	char				*tmp;

	if (fd < 0 || fd > OPEN_MAX || line == NULL)
		return (-1);
	if (dest[fd] == NULL)
		if (!(dest[fd] = ft_strnew(0)))
			return (-1);
	while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		tmp = dest[fd];
		if (!(dest[fd] = ft_strjoin(dest[fd], stock)))
			return (-1);
		ft_strdel(&tmp);
		if (ft_strchr(dest[fd], '\n') != NULL)
			break ;
	}
	if (read_return <= 0 && ft_strlen(dest[fd]) == 0)
		return (read_return);
	return (ft_affect(&dest[fd], line));
}
