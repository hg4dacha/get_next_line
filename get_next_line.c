/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/09 18:22:16 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int						ft_strnlen(char *str, char c)
{
	int					j;

	j = 0;
	while (str[j] != '\0' && str[j] != c)
		j++;
	return (j);
}

int					ft_affect(int i, char **dest, char **line)
{
	i = ft_strnlen((*dest), '\n');
	(*line) = ft_strsub(*dest, 0, i);
	if (*line == NULL)
		return (-1);
	if ((*dest)[i] != '\0')
		(*dest) = ft_strcpy((*dest), ((*dest) + i) + 1);
	else
		free(dest);
	return (1);
}

int						get_next_line(const int fd, char **line)
{
	int					read_return;
	char				stock[BUFF_SIZE + 1];
	static char			*dest[OPEN_MAX];
	int					i;

	i = 0;
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
			break ;
	}
	if (read_return <= 0 && ft_strlen(dest[fd]) == 0)
		return (read_return);
	return(ft_affect(i, &dest[fd], line));
}
