/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:56:05 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:16:22 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	(write(1, &c, 1));
}

int	count_nbrd(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 9)
	{
		i++;
		nbr /= 10;
	}
	i++;
	return (i);
}

int	ft_d(int nbr)
{
	int	original_nbr;

	original_nbr = nbr;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		nbr = (nbr * -1);
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_d(nbr / 10);
		ft_d(nbr % 10);
	}
	else if (nbr < 10)
		ft_putchar(nbr + 48);
	return (count_nbrd(original_nbr));
}
