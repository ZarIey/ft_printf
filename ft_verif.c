/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:58:15 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/06 13:33:24 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_verif(char *type, va_list content)
{
	if (*type == 'c')
		return (ft_c(va_arg(content, int)));
	else if (*type == 's')
		return (ft_s(va_arg(content, char *)));
	else if (*type == 'd' || *type == 'i')
		return (ft_d(va_arg(content, int)));
	else if (*type == 'u')
		return (ft_u(va_arg(content, unsigned int)));
	else if (*type == 'x')
		return (ft_lx(va_arg(content, unsigned int), "0123456789abcdef"));
	else if (*type == 'X')
		return (ft_bx(va_arg(content, unsigned int), "0123456789ABCDEF"));
	else if (*type == '%')
		return (write(1, "%", 1));
	else if (*type == 'p')
	{
		write (1, "0x", 2);
		return (ft_p(va_arg(content, unsigned long), "0123456789abcdef") + 2);
	}
	return (0);
}
