/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/09/11 19:48:16 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	line = (char**)malloc(sizeof(char*));
	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);
	line = (char**)malloc(sizeof(char*));

	int		read_return;
	int		i;
	char	dest[BUFF_SIZE + 1];

	while ((read_return	= read(fd, dest, BUFF_SIZE)) > 0)
	{
		dest[read_return] = '\0';
		i = 0;
		while (dest[i] != '\0' && dest[i] != '\n')
		{
			printf("%c", dest[i]);
			i++;
		}
		printf("\n");
		//*line = (char*)malloc(sizeof(char*) * 50);
		i++;

	}
	return 0;
}
