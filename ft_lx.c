/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:57:40 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:15:30 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharlx(char c)
{
	return (write(1, &c, 1));
}

int	ft_lx(unsigned int hex, char *base)
{	
	int	i;

	i = 0;
	base = "0123456789abcdef";
	if (hex >= 16)
	{
		i += ft_lx((hex / 16), base);
		ft_putcharlx(base[hex % 16]);
	}
	else
		ft_putcharlx(base[hex]);
	i++;
	return (i);
}
