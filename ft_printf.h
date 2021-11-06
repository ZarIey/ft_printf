/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:31:42 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/05 19:46:23 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *str, ...);
int		ft_verif(char *type, va_list content);
int		ft_c(char c);
int		ft_s(char *str);
int		ft_p(unsigned long ad, char *base);
int		ft_d(int nbr);
int		ft_u(unsigned int nbr);
int		ft_bx(unsigned int hex, char *base);
int		ft_lx(unsigned int hex, char *base);

#endif