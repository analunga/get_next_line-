/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analunga <analunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:50:09 by analunga          #+#    #+#             */
/*   Updated: 2024/04/14 21:14:20 by analunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_putbase_fd(int n, const char *base, int fd)
{
	int				base_len;
	int				ret;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (base_len < 2)
		return (-1);
	ret = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ret += 1;
		n *= -1;
	}
	if (n >= base_len)
		ret += ft_putbase_fd(n / base_len, base, fd);
	ft_putchar_fd(base[n % base_len], fd);
	ret++;
	return (ret);
}
