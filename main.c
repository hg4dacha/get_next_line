/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:37:49 by hgadacha          #+#    #+#             */
/*   Updated: 2019/10/01 15:19:49 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char *exemple;
	
	fd = open("text.txt", O_RDONLY);
	while ((get_next_line(fd, &exemple)) > 0)
	{
		printf("\033[34m%s\033[0m\n", exemple);
		getchar();
	}
	return 0;
}
