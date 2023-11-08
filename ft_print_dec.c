/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:12:43 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/08 22:15:32 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n, char *str, int len);

int	ft_print_dec(va_list *args)
{
	long			num;
	char			sign;
	char			*str;
	int				len;

	num = va_arg(*args, long);
	sign = (num < 0) + 1 * (num >= 0);
	len = sign;
	len += ft_num_len_base_positive(num * sign, 10);
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (sign)
	{
		*str = '-';
		ft_putnbr(num * sign, str + 1);
	}
	else
		ft_putnbr(num, str);
	len = ft_putstr(str);
	free(str);
	return (len);
}

static void	ft_putnbr(int n, char *str, int len)
{
	/ Сделать путнамбр заполняющим массив
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
