/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:32:27 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/02 21:03:35 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_write(int *nbr);

void	ft_to_nbr(int ar, char **argv, int *str)
{
	int	i;
	int	j;

	i = 0;
	ar = 1;
	while (argv[ar][i] != '\0')
	{
		if ((argv[ar][i] > 47) && (argv[ar][i] < 58))
		{	
			argv[ar][i] = argv[ar][i] - '0';
			i++;
		}	
		else
		{	
			printf("Ha introducido un caracter");
			i = ft_strlen(argv[ar]);
		}
	}
	j = 0;
	while (i >= 0)
	{
		str[j] = argv[ar][i];
		i--;
		j++;
	}
}
