/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/09/30 19:02:14 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlenn(char *str, int i)
{
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strnlen(char *str, int i)
{
	int j;

	j = 0;
	while (str[j] != '\0' && str[j] < i)
		j++;
	return (j);
}

int	get_next_line(const int fd, char **line)
{
	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);

	int					read_return;
	static int			i = 0;
	static char			*dest = "";
	char				stock[BUFF_SIZE + 1];
	while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		dest = ft_strcat(dest, stock);
		while (dest[i] != '\0' && dest[i] != '\n')
		{
			i++;
		}
		if (dest[i] == '\n')
		{
			*line = (char*)malloc(sizeof(char) * (strnlen(dest, i)));
			ft_strncpy(*line, dest, i);
			dest = ft_strsub(dest, i, ft_strnlen(dest, i));
			return (1);
		}
	}
	return (0);
}
