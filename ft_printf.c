/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:11:05 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/10 17:33:49 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static void	print_val2(const char *str, int *i, int *printed, va_list ap)
{
	if (str[*i] == '%' && str[*i + 1] == 'u' && ++*i)
		ft_putnbru(va_arg(ap, unsigned int), printed);
	else if (str[*i] == '%' && str[*i + 1] == 'x' && ++*i)
		ft_putnbr_hexa(va_arg(ap, unsigned int), printed);
	else if (str[*i] == '%' && str[*i + 1] == 'X' && ++*i)
		ft_putnbr_hexa_maj(va_arg(ap, unsigned int), printed);
	else if (str[*i] == '%' && str[*i + 1] == '%' && ++*i)
		ft_putchar('%', printed);
	else
	{
		write(1, &str[*i], 1);
		*printed = *printed + 1;
	}
}

static void	print_val1(const char *str, int *i, int *printed, va_list ap)
{
	int	init;

	init = 0;
	if (str[*i] == '%' && str[*i + 1] == 'c' && ++*i)
		ft_putchar(va_arg(ap, int), printed);
	else if (str[*i] == '%' && str[*i + 1] == 's' && ++*i)
		ft_putstr(va_arg(ap, char *), printed);
	else if (str[*i] == '%' && str[*i + 1] == 'p' && ++*i)
	{
		ft_pointer((unsigned long int) va_arg(ap, void *), printed, &init);
		init = 0;
	}
	else if (str[*i] == '%' && str[*i + 1] == 'd' && ++*i)
		ft_putnbr(va_arg(ap, int), printed);
	else if (str[*i] == '%' && str[*i + 1] == 'i' && ++*i)
		ft_putnbr(va_arg(ap, int), printed);
	else
		print_val2(str, i, printed, ap);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printed;
	va_list	ap;

	i = 0;
	printed = 0;
	va_start(ap, str);
	if (ft_strchr(str, '%'))
	{
		while (str[i])
		{	
			print_val1(str, &i, &printed, ap);
			i++;
		}
	}
	else
		ft_putstr((char *)str, &printed);
	va_end(ap);
	return (printed);
}
