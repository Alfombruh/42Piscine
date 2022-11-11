/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:01:35 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/04 12:52:10 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv, t_info *info)
{
	int	i;

	i = 1 ;
	if (argc == 1)
	{
		validate_table(info);
		ft_check_arguments(make_square(info));
	}
	while (i < argc)
	{
		validate_table(&argv[1]);
		ft_check_arguments(make_square(info));
		if (i < argc -1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
