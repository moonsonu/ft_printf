/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:09:01 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/17 18:31:01 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	c[] = "moon";
	int		x;
	int		*ptr;

	x = 2;
	ptr = &x;

//	printf("%4c\n", c[1]);
//	ft_printf("%c\n", c[1]);
//	printf("%5c\n", c[1]);
//	ft_printf("%53c\n", c[1]);
//	printf("%-7c\n", c[1]);
//	ft_printf("%28c", c[1]);
//	printf("sdfsdf\n");
//	printf("%+-10d\n", 10);
//	printf("%05s\n", c);
//	ft_printf("%-10s\n", c);
//	printf("%%\n");
//	ft_printf("%%\n");
	printf("%3d\n", 11);
	ft_printf("%3d\n", 11);
	printf("%-3d", 123);
	printf("sdfsdf\n");
	ft_printf("%-3d", 123);
	printf("sdfsdf\n");
	printf("%-05d", 123);
	printf("sdfsdf\n");
	ft_printf("%-05d", 123);
	printf("sdfsdf\n\n\n\n\n");
	printf("%+d\n", 123);
	printf("%+d\n", -123);
	printf("% d\n", 123);
	printf("% d\n", -123);
	printf("%+ 8d\n", 123);
	printf("%+ 8d\n", -123);
	printf("% 8d\n", 123);
	printf("% 8d\n", -123);
	return (0);
}
