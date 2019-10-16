/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:37:49 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/15 15:32:42 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main(int ac, char **av)
{
	int		fd;
	char	*exemple;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	while ((get_next_line(fd, &exemple)) > 0)
	{
		printf("\033[34m%s\033[0m\n", exemple);
		ft_strdel(&exemple);
	}
	close(fd);
	return (0);
}
