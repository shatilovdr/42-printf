/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:23:19 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/07 19:09:35 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	pos;
	int		len;
	va_list	args;

	va_start(args, str);
	pos = 0;
	len = 0;
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			len += ft_switch((char *)&str[++pos], &args);
			pos++;
			continue ;
		}
		ft_putchar_fd(str[pos++], 1);
		len++;
	}
	return (len);
}

int	main(void)
{
	//ft_printf("%p", "sdfasdfsdf");
	void	*ptr;

	ptr = (void *) 24153425314;
	char	test[] = "43425";
	printf("%zu", test);
	printf("\n");
	return (0);
}
