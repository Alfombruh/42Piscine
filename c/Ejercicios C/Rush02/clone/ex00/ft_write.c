/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:48:59 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/02 21:17:16 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int *nbr)
{
	int	i;

	i = 10;
	nbr[i] = nbr[i] + '0';
	write(1, &nbr[10], 1);
	write(1, "billion", 8);
	i--;
	while (i > 6)
	{
		ft_putchar(nbr[i])
		i--;
	}
	write(1, "million", 8);
	while (i > 3)
	{
		ft_putchar(nbr[i])
		i--;
	}
	write(1, "thousand and", 12);
	while (i > 0)
	{
		ft_putchar(nbr[i])
		i--;
	}		
}

void	ft_putchar2(int i)
{
	nbr[i] = nbr[i] +'0';
	if (nbr != 0)
		write(1, &nbr[i], 1);
}
