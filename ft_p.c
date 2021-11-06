/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:57:19 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:16:56 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharp(char c)
{
	return (write(1, &c, 1));
}

int	ft_p(unsigned long ad, char *base)
{
	int	i;

	i = 0;
	base = "0123456789abcdef";
	if (ad >= 16)
	{
		i += ft_p((ad / 16), base);
		ft_putcharp(base[ad % 16]);
	}
	else
		ft_putcharp(base[ad]);
	i++;
	return (i);
}
