/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:32:09 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/02 21:01:48 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_r_dic(char *dict)
{
	int		fd;
	int		read_c;
	char	aux;
	char	linea[50];
	int		i;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (aux != '\n')
	{				
		read_c = read (fd, &aux, 1);
		linea[i] = aux;
		i++;
	}	
	close(fd);
}

int	size_of_file(char *dict)
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
		if (aux == EOF)
			break ;
		i++;
	}
	close(fd);
	return (size);
}
