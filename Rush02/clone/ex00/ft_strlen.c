/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:28:27 by jofernan          #+#    #+#             */
/*   Updated: 2021/05/02 19:49:03 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		len;
	char	caracter;

	len = 0;
	caracter = str[0];
	while (caracter != '\0')
	{
		len++;
		caracter = str[len];
	}
	return (len);
}
