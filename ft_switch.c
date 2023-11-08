/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:41:44 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/08 18:09:46 by dshatilo         ###   ########.fr       */
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
	// else if (flag == 'd')
	// 	printf("d\n");//do_decimal;
	// else if (flag == 'i')
	// 	printf("i\n");//do_integer;
	// else if (flag == 'u')
	// 	printf("u\n");//do_unsigned;
	else if (flag == 'x')
		return (ft_print_x_low(args));
	else if (flag == 'X')
		return (ft_print_x_cap(args));
	// else if (flag == '%')
	// 	printf("5\n");//do_percent;
	else 
		printf("error");
		//do_something
	return (0);
}
