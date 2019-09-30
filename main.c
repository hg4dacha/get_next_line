/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:37:49 by hgadacha          #+#    #+#             */
/*   Updated: 2019/09/30 19:04:01 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char *exemple;
	
	fd = open("text.txt", O_RDONLY);
	while ((get_next_line(fd, &exemple)) == 1)
	{
		printf("%s", exemple);
	}
	return 0;
}
