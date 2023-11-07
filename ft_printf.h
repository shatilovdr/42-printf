/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:39:11 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/07 18:56:46 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdio.h> //REMOVE ME!
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_switch(char *str, va_list *args);
int	ft_print_char(va_list *args);
int	ft_print_str(va_list *args);
int	ft_print_ptr(va_list *args);

#endif