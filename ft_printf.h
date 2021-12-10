/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:42:51 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/10 16:45:10 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);
void	ft_putchar(char c, int *printed);
void	ft_putstr(char *str, int *printed);
void	ft_putnbr(int nbr, int *printed);
void	ft_putnbru(unsigned int nbr, int *printed);
void	ft_putnbr_hexa(unsigned int nbr, int *printed);
void	ft_putnbr_hexa_maj(unsigned int nbr, int *printed);
void	ft_pointer(unsigned long int pointer, int *printed, int *init);
size_t	ft_strlen(const char *s);

#endif