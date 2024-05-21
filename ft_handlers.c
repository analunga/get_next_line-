/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analunga <analunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:39:26 by analunga          #+#    #+#             */
/*   Updated: 2024/04/14 23:26:23 by analunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(va_list args)
{
	return (ft_putchar(va_arg(args, int)));
}

int	handle_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	handle_int(va_list args)
{
	return (ft_putint(va_arg(args, int)));
}

int	handle_hex(va_list args, int uppercase)
{
	unsigned int	n;
	int				ret;

	n = va_arg(args, unsigned int);
	if (uppercase)
		ret = ft_put_hex_uppercase(n);
	else
		ret = ft_put_hex_lowercase(n);
	return (ret);
}

int	handle_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (ft_putstr("0x0"));
	return (ft_print_address(ptr));
}
