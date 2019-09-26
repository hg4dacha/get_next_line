/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/09/26 18:51:02 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);

	int			read_return;
	int			i;
	int			j;
	static char	dest[BUFF_SIZE + 1];
	char 		*stock = NULL;
	
	*line = (char*)malloc(sizeof(char) * BUFF_SIZE);
	while ((read_return	= read(fd, dest, BUFF_SIZE)) > 0)
	{
		dest[read_return] = '\0';
		/*if (stock == NULL)
			stock = dest;
		else*/
		stock = ft_strcat(stock, dest);
		i = 0;
		j = 0;
		while (stock[i] != '\0' && stock[i] != '\n')
		{
			(*line)[j] = stock[i];
			i++;
			j++;
		}
	}
	//*line[j + 1] = '\0';
	return 0;
}
