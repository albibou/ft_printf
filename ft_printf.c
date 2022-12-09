/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atardif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:13:31 by atardif           #+#    #+#             */
/*   Updated: 2022/12/08 14:48:48 by atardif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convcall(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_ischar(ap);
	else if (c == 's')
		count += ft_isstr(ap);
	else if (c == 'i' || c == 'd')
		count += ft_isint(ap);
	else if (c == 'u')
		count += ft_isuns(ap);
	else if (c == 'x')
		count += ft_ishexl(ap);
	else if (c == 'X')
		count += ft_ishexu(ap);
	else if (c == 'p')
		count += ft_ispoint(ap);
	else
	{
		write (1, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%' && ft_strchr(format[i + 1], "cspdiuxX%"))
		{
			i++;
			count += ft_convcall(format[i], ap);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
