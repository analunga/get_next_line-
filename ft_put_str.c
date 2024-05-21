/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analunga <analunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:06:12 by analunga          #+#    #+#             */
/*   Updated: 2024/04/12 22:57:23 by analunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	written_chars;

	written_chars = 0;
	while (*str)
	{
		if (ft_putchar(*str) == -1)
			return (-1);
		written_chars++;
		str++;
	}
	return (written_chars);
}
