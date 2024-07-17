/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:28:34 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/09 09:06:17 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int	ft_printf(const char *format, ...);

int main(void)
{
	int i, j;
	int	x = 42;
	char c = 's';

	ft_printf("unsigned: \n");
	i = printf("%u, %u, %u, %u, %u, %u, %u\n", 0, 53, 8, -1, -56789, -429, 7);
	j = ft_printf("%u, %u, %u, %u, %u, %u, %u\n", 0, 53, 8, -1, -56789, -429, 7);
	printf("ret real: %d, ret mio: %d\n\n", i, j);
	
	ft_printf("numeros\n");
	i = printf("%d, %d, %i, %i, %d, %i, %i\n", 0, 53, 8, -1, -56789, -429, 7);
	j = ft_printf("%d, %d, %i, %i, %d, %i, %i\n", 0, 53, 8, -1, -56789, -429, 7);
	printf("ret real: %d, ret mio: %d\n\n", i, j);
	

	ft_printf("stings: \n");
	i = printf("%s, %s, %s, %s, %s, %s, %s\n", "hola", NULL, "que tal", "3232", "    fsfsd  ", "64352---3232", "");
	j = ft_printf("%s, %s, %s, %s, %s, %s, %s\n",  "hola", NULL, "que tal", "3232", "    fsfsd  ", "64352---3232", "");
	printf("ret real: %d, ret mio: %d\n\n", i, j);

	ft_printf("punteros: \n");
	i = printf("%p, %p, %p, %p, %p, %p\n", &x, &"dsd", NULL, 0, &"0", &i);
	j = ft_printf("%p, %p, %p, %p, %p, %p\n", &x, &"dsd", NULL, 0, &"0", &i);
	printf("ret real: %d, ret mio: %d\n\n", i, j);

	ft_printf("chars: \n");
	i = printf("%c, %c, %c, %c, %c, %c, %c\n", NULL, 'a', c, (char)x, (char)j, '0', "");
	j = ft_printf("%c, %c, %c, %c, %c, %c, %c\n", NULL, 'a', c, (char)x, (char)j, '0', "");
	printf("ret real: %d, ret mio: %d\n\n", i, j);
}
