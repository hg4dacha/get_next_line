/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:24:23 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/03 18:57:43 by hgadacha         ###   ########.fr       */
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

int	ft_affect(char **line, char **dest, int a)
{
	*line = (char*)malloc(sizeof(char) * (ft_strnlen(*dest, (*dest)[a])));
	if (*line == NULL)
		return (-1);
	*line = ft_strncpy(*line, *dest, a);
	*dest = ft_strsub(*dest, a + 1,  ft_strlenn(*dest, a));
	return (1);
}	

int	get_next_line(const int fd, char **line)
{
	if (fd < 3 || fd > OPEN_MAX || line == NULL)
		return (-1);

	int					read_return;
	int					i;
	static char			*dest = "";
	char				stock[BUFF_SIZE + 1];
	while ((read_return = read(fd, stock, BUFF_SIZE)) > 0)
	{
		stock[read_return] = '\0';
		dest = ft_strjoin(dest, stock);
		i = 0;
		while (dest[i] != '\0')
		{
			if (dest[i] == '\n')
				return (ft_affect(line, &dest, i));
			i++;
		}
	}
	if (read_return == 0)
	{
		printf("%s\n", dest);
	}
	return (0);
}
