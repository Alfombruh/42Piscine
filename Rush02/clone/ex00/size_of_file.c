/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_of_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 19:53:15 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/02 20:49:40 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	size_of_file (char *dict)
{
	int		i;
	int		fd;
	int		size;
	char	aux;
	int		read_c;

	aux = 0;
	i = 0;
	size = 0;
	fd = open(dict, O_RDONLY);
	while (i < 7500)
	{
		read_c = read(fd, &aux, 1);
		if (aux == ':')
			size++;
		i++;
	}
	close(fd);
}	
