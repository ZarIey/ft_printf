/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:57:32 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:37:58 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharc(char c)
{
	(write(1, &c, 1));
}

int	count_nbru(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr > 9)
	{
		i++;
		nbr /= 10;
	}
	i++;
	return (i);
}

int	ft_u(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_u(nbr / 10);
		ft_u(nbr % 10);
	}
	else if (nbr < 10)
		ft_putcharc(nbr + 48);
	return (count_nbru(nbr));
}
