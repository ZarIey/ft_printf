/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:35:34 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:14:39 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharbx(char c)
{
	return (write(1, &c, 1));
}

int	ft_bx(unsigned int hex, char *base)
{	
	int	i;

	i = 0;
	base = "0123456789ABCDEF";
	if (hex >= 16)
	{
		i += ft_bx((hex / 16), base);
		ft_putcharbx(base[hex % 16]);
	}
	else
		ft_putcharbx(base[hex]);
	i++;
	return (i);
}
