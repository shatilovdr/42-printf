/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:41:44 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/10 16:15:14 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switch(char *str, va_list *args)
{
	char	flag;

	flag = *str;
	if (flag == 'c')
		return (ft_print_char(args));
	else if (flag == 's')
		return (ft_print_str(args));
	else if (flag == 'p')
		return (ft_print_ptr(args));
	else if (flag == 'd')
		return (ft_print_dec(args));
	else if (flag == 'i')
		return (ft_print_dec(args));
	else if (flag == 'u')
		return (ft_print_unsigned_dec(args));
	else if (flag == 'x')
		return (ft_print_x_low(args));
	else if (flag == 'X')
		return (ft_print_x_cap(args));
	else if (flag != '\0')
		return (ft_putchar(flag));
	return (0);
}
