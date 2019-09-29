/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:25:07 by hgadacha          #+#    #+#             */
/*   Updated: 2019/09/26 18:48:14 by hgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H__
# define __GET_NEXT_LINE_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//#include "/Users/hgadacha/Projets-42/libft/libft.h"
#include "/home/gadacha/Projets-42/libft/libft.h"
#define BUFF_SIZE 32

int	get_next_line(const int fd, char **line);

#endif
