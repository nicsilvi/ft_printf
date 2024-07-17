/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:06:35 by smercado          #+#    #+#             */
/*   Updated: 2024/07/08 15:53:50 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

char	*place_str(char *str, unsigned int i, unsigned int n);
int		ft_printf(char const *str, ...);
void	ft_findtype(va_list argument, char format, int *count);
void	ft_putcharplus(char c, int *count);
void	ft_putstrplus(char *str, int *count);
void	ft_puthexaminus(unsigned int nh, int *count);
void	ft_puthexamayus(unsigned int nh, int *count);
void	ft_putnumber(int n, int *count);
void	ft_putpointer(void *ptr, int *count);
void	ft_putunsigned(unsigned int n, int *count);

#endif
