/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:58:11 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/25 12:01:08 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putarg(const char arg_type, va_list args, int *len)
{
	if (arg_type == 'c')
		ft_put_char(va_arg(args, int), len);
	else if (arg_type == 's')
		ft_put_str(va_arg(args, char *), len);
	else if (arg_type == 'p')
		ft_put_ptr(va_arg(args, void *), len);
	else if (arg_type == 'd')
		ft_put_dec(va_arg(args, int), len);
	else if (arg_type == 'i')
		ft_put_dec(va_arg(args, int), len);
	else if (arg_type == 'u')
		ft_put_unsignedint(va_arg(args, unsigned int), len);
	else if (arg_type == 'x')
		ft_put_hex_lower(va_arg(args, unsigned int), len);
	else if (arg_type == 'X')
		ft_put_hex_upper(va_arg(args, unsigned int), len);
	else if (arg_type == '%')
		ft_put_char('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	len = 0;
	while (i < ft_strlen(format))
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			len++;
		}
		else
		{
			putarg(format[i + 1], args, &len);
			i++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
