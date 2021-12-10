/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:11:05 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/09 17:47:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	int printed;
	static int init = 0;
	va_list ap;

	i = 0;
	printed = 0;
	va_start(ap, str);
	if (ft_strchr(str, '%'))
	{
		while (str[i])
		{	
			if (str[i] == '%' && str[i + 1] == 'c' && ++i)
				ft_putchar((int)va_arg(ap, int), &printed);
			else if (str[i] == '%' && str[i + 1] == 's' && ++i)
				ft_putstr((char *)va_arg(ap, char *), &printed);
			else if (str[i] == '%' && str[i + 1] == 'p' && ++i)
			{
				ft_pointer((unsigned long int) va_arg(ap, void *), &printed, &init);
				init = 0;
			}
			else if (str[i] == '%' && str[i + 1] == 'd' && ++i)
				ft_putnbr((int) va_arg(ap, int), &printed);
			else if (str[i] == '%' && str[i + 1] == 'i' && ++i)
				ft_putnbr((int) va_arg(ap, int), &printed);
			else if (str[i] == '%' && str[i + 1 ] == 'u' && ++i)
				ft_putnbru(va_arg(ap, unsigned int), &printed);
			else if (str[i] == '%' && str[i + 1] == 'x' && ++i)
				ft_putnbr_hexa(va_arg(ap, unsigned int), &printed);
			else if (str[i] == '%' && str[i + 1] == 'X' && ++i)
				ft_putnbr_hexa_maj(va_arg(ap, unsigned int), &printed);
			else if (str[i] == '%' && str[i + 1] == '%' && ++i)
				ft_putchar('%', &printed);
			else
			{
				write(1, &str[i], 1);
				printed++;
			}
			i++;
		}
	}
	else
		ft_putstr((char *)str, &printed);
	va_end(ap);

	return (printed);
}