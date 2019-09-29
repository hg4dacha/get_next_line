/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/09/27 12:05:08 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strnlen(char *str, int i)
{
	int j;

	j = 0;
	while (str(j) != '\0' && str(j) < i)
		j++;
	return (j);
}

int	get_next_line(const int fd, char **line)
{
	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);

	int					read_return;
	static int			i = 0;
	static char			dest[BUFF_SIZE + 1] = "";
	char 				stock[BUFF_SIZE + 1] = NULL;
	
	while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		dest = ft_strcat(dest, stock);
		while (dest[i] != '\0' && dest[i] != '\n')
		{
			i++;
		}
	}
	//*line[j + 1] = '\0';
	*line = (char*)malloc(sizeof(char) * (strnlen(dest, i)));
	ft_strncpy(&line, dest, i);
	dest = ft_strsub(dest, i, )
	return 0;
}
