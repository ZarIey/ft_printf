/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:54:44 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/06 13:35:05 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		content;
	int			i;
	int			result;
	char		*type;

	type = (char *)str;
	i = 0;
	result = 0;
	va_start(content, str);
	while (type[i])
	{
		while (type[i] != '%' && type[i])
		{
			write(1, &type[i], 1);
			result++;
			i++;
		}
		if (type[i] == '%' && type[i++])
			result += ft_verif(&type[i++], content);
	}
	va_end(content);
	return (result);
}
int main()
{
	ft_printf(" %s %s ", "lol");

}