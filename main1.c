/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:32:27 by smercado          #+#    #+#             */
/*   Updated: 2024/07/09 09:23:12 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{

	int	e = 16;
	char a = 'e';
	int	i,j;
	char *s = "tal";
	char r = 's';
	int	contadorft;
	int	contadorreal;
	int	x = -1212321;
	int X = 11;
	int nb = -2147483648;

	ft_printf("prueba de strings\n");
	contadorft = ft_printf("hola que %s\n", s);
	contadorreal = printf("hola que %s\n", s);
	ft_printf("mi contador = %d y contador real = %d\n", contadorft, contadorreal);

	ft_printf("prueba de numeros\n");
	contadorft = ft_printf("%d\n%i\nunsigned negativo: %u\n", 6454, -65453, -543434);
	contadorreal = ft_printf("%d\n%i\nunsigned negativo: %u\n", 6454, -65453, -543434);
	ft_printf("mi contador = %d y contador real = %d\n", contadorft, contadorreal);

	ft_printf("prueba hexadecimal\n");
	contadorft = ft_printf("%x\n%X\n%x\n%X\n", x, x, nb, nb);
	contadorreal = ft_printf("%x\n%X\n%x\n%X\n", x, x, nb, nb);
	ft_printf("mi contador = %d y contador real = %d\n", contadorft, contadorreal);

	ft_printf("prueba de %%:\n");
	contadorft = ft_printf("%%\n");
	contadorreal = printf("%%\n");
	ft_printf("mi contador = %d y contador real = %d\n", contadorft, contadorreal);

	ft_printf("prueba d%c punteros\n", a);
	i = ft_printf("%p, %p\n", &e, &a);
	j = printf("%p, %p\n", &e, &a);
	ft_printf("mi contador = %d y contador real = %d\n", i, j);

	i = printf("%d %u %x %X %% %p %c %s\n", -2147483648, 2147483647 * 2, -1, 2147483647, &x, (char)x, NULL);
	j = ft_printf("%d %u %x %X %% %p %c %s\n", -2147483648, 2147483647 * 2, -1, 2147483647, &x, (char)x, NULL);
	printf("pr: %d, ft: %d\n",i, j);

	i = ft_printf("int %d unsig %u hexaminus %x hexamay %X percent %% pointer %p char %c string %s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	j = printf("int %d unsig %u hexaminus %x hexamay %X percent %% pointer %p char %c string %s\n", (char *)NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("pr: %d, ft: %d\n",j, i);

	i = ft_printf("int %d unsig %u hexaminus %x hexamay %X percent %% pointer %p\n",6453434343, 4342342434, 434342, 34343, &x);
   	j = printf("int %d unsig %u hexaminus %x hexamay %X percent %% pointer %p\n",6453434343, 4342342434, 434342, 34343, &x);
		printf("pr: %d, ft: %d\n",j, i);
	return (0);

}
