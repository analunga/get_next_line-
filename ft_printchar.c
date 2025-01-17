/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analunga <analunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:43:31 by analunga          #+#    #+#             */
/*   Updated: 2024/04/12 18:57:13 by analunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c, int fd)
{
	if (fd < 0 || fd > 2)
		return (-1);
	if (write(fd, &c, 1) == -1)
		return (-1);
	return (1);
}
