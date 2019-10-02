/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/01 18:42:10 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlenn(char *str, int i)
{
	while (str[i] != '\0')
		i++;
	return (i);
}

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
	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);

	int					read_return;
	static int			i = 0;
	static char			*dest = "";
	char				stock[BUFF_SIZE + 1];
	while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		dest = ft_strjoin(dest, stock);
		while (dest[i] != '\0')
		{
			if (dest[i] == '\n')
			{
				*line = (char*)malloc(sizeof(char) * (ft_strnlen(dest, dest[i])));
				ft_strncpy(*line, dest, i);
				printf(">>>>%s<<<<", *line);
				dest = ft_strsub(dest, i, ft_strlenn(dest, i));
				i++;
				return (1);
			}
			i++;
		}
	}
	return (0);
}
