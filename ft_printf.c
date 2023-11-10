/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:23:19 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/10 16:02:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	pos;
	int		len;
	int		cur_res;
	va_list	args;

	va_start(args, str);
	pos = 0;
	len = 0;
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			cur_res = ft_switch((char *)&str[++pos], &args);
			if (cur_res == -1)
				return (-1);
			len += cur_res;
			pos += (str[pos] != 0);
			continue ;
		}
		cur_res = ft_putchar(str[pos++]);
		if (cur_res == -1)
			return (-1);
		len += cur_res;
	}
	return (len);
}
