/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:11:06 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/09 17:33:50 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void    ft_putchar(char c, int *printed)
{
    write(1, &c, 1);
    *printed = *printed + 1;
}

void    ft_putstr(char *str, int *printed)
{
    int i;

    i = -1;
    if (!str)
    {
        write(1, "(null)", 6);
        *printed = *printed + 6;
        return ;
    }
    while (str[++i])
    {
        write(1, &str[i], 1);
        *printed = *printed + 1;
    }
}