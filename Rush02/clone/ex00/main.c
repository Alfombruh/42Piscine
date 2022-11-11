/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:34:52 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/02 21:34:54 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	main(int argc, char **argv)
{
	int	nbr[9];

	if (error_oversize(int argv) == 0)
	{
		return (0);
	}
	else
	{
		ft_to_nbr(argc, argv, nbr);
		ft_write(nbr);
	}
	return (0);
}
