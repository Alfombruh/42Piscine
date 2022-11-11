/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 10:54:24 by jmendia           #+#    #+#             */
/*   Updated: 2021/04/25 11:12:59 by jmendia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_err.c"
#include "comb_check.c"

int	main(int argc, char **argv)
{	
	ft_err(argc, argv[1]);
	ft_comb_check(*argv);
	return (0);
}
