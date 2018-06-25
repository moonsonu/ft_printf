/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:09:01 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/24 21:28:33 by ksonu            ###   ########.fr       */
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
//	printf("%3d\n", 11);
//	ft_printf("%3d\n", 11);
//	printf("% 5d", 123);
//	printf("sdfsdf\n");
//	ft_printf("% 5d", 123);
//	printf("sdfsdf\n");
//	printf("%-05d", 123);
//	printf("sdfsdf\n");
//	ft_printf("%-05d", 123);
//	printf("sdfsdf\n\n\n\n\n");
//	printf("%+d\n", 123);
//	printf("%+d\n", -123);
//	printf("% d\n", 123);
//	printf("% d\n", -123);
//	printf("%+ 8d\n", 123);
//	printf("%+ 8d\n", -123);
//	printf("% 8d\n", 123);
//	printf("% 8d\n", -123);

//	printf("%12.5d\n", 123);
//	printf("%12.5d\n", -123);
//	printf("%-12.5d", 123);
//	printf("sdfsdfsdf\n");
//	printf("%-12.5d", -123);
//	printf("sdfsdfsdf\n");
//	printf("%+2.5d\n", 123);
//	printf("%+2.5d\n", -123);
//	printf("%#2.5d\n", 123);
//	printf("%#2.5d\n", -123);
//	printf("%012.5d\n", 123);
//	printf("%012.5d\n", -123);
//	printf("% 12.5d\n", 123);
//	printf("% 12.5d\n", -123);
//	ft_putstr("----------------\n");
//	ft_printf("%12.5d\n", 123);
//	ft_printf("%12.5d\n", -123);
//	ft_printf("%-12.5d", 123);
//	printf("sdfsdfsdf\n");
//	ft_printf("%-12.5d", -123);
//	printf("sdfsdfsdf\n");
//	ft_printf("%+2.5d\n", 123);
//	ft_printf("%+2.5d\n", -123);
//	ft_printf("%#2.5d\n", 123);
//	ft_printf("%#2.5d\n", -123);
//	ft_printf("%012.5d\n", 123);
//	ft_printf("%012.5d\n", -123);
//	ft_printf("% 12.5d\n", 123);
//	ft_printf("% 12.5d\n", -123);
//	ft_printf("%u\n", 123);
//	ft_printf("%u\n", -123);
//	ft_printf("%-5u\n", 123);
//	ft_printf("%-5u\n", -123);
//	ft_printf("%+5u\n", 123);
//	ft_printf("%+5u\n", -123);
//	ft_printf("%#5u\n", 123);
//	ft_printf("%#5u\n", -123);
//	ft_printf("%05u\n", 123);
//	ft_printf("%05u\n", -123);
//	ft_printf("% 5u\n", 123);
//	ft_printf("% 5u\n", -123);

	printf("%.10u\n", 123);
	printf("%.10u\n", -123);
	printf("%-5.10u\n", 123);
	printf("%-5.10u\n", -123);
	printf("%+5.10u\n", 123);
	printf("%+5.10u\n", -123);
	printf("%#5.10u\n", 123);
	printf("%#5.10u\n", -123);
	printf("%05.10u\n", 123);
	printf("%05.10u\n", -123);
	printf("% 5.10u\n", 123);
	printf("% 5.10u\n", -123);
//	ft_putstr("----------------\n");
//	ft_printf("%u\n", 123);
//	ft_printf("%u\n", -123);
//	ft_printf("%-5u\n", 123);
//	ft_printf("%-5u\n", -123);
//	ft_printf("%+5u\n", 123);
//	ft_printf("%+5u\n", -123);
//	ft_printf("%#5u\n", 123);
//	ft_printf("%#5u\n", -123);
//	ft_printf("%05u\n", 123);
//	ft_printf("%05u\n", -123);
//	ft_printf("% 5u\n", 123);
//	ft_printf("% 5u\n", -123);

	ft_putstr("----------------\n");
	printf("%.10o\n", 123);
	printf("%.10o\n", -123);
	printf("%-5.10o\n", 123);
	printf("%-5.10o\n", -123);
	printf("%+5.10o\n", 123);
	printf("%+5.10o\n", -123);
	printf("%#5.10o\n", 123);
	printf("%#5.10o\n", -123);
	printf("%05.10o\n", 123);
	printf("%05.10o\n", -123);
	printf("% 5.10o\n", 123);
	printf("% 5.10o\n", -123);
//	ft_putstr("----------------\n");
//	ft_printf("%o\n", 123);
//	ft_printf("%o\n", -123);
//	ft_printf("%-5o\n", 123);
//	ft_printf("%-5o\n", -123);
//	ft_printf("%+5o\n", 123);
//	ft_printf("%+5o\n", -123);
//	ft_printf("%#5o\n", 123);
//	ft_printf("%#5o\n", -123);
//	ft_printf("%05o\n", 123);
//	ft_printf("%05o\n", -123);
//	ft_printf("% 5o\n", 123);
//	ft_printf("% 5o\n", -123);

	ft_putstr("----------------\n");
	printf("%.10x\n", 123);
	printf("%.10x\n", -123);
	printf("%-5.10x\n", 123);
	printf("%-5.10x\n", -123);
	printf("%+5.10x\n", 123);
	printf("%+5.10x\n", -123);
	printf("%#5.10x\n", 123);
	printf("%#5.10x\n", -123);
	printf("%05.10x\n", 123);
	printf("%05.10x\n", -123);
	printf("% 5.10x\n", 123);
	printf("% 5.10x\n", -123);
//	ft_putstr("----------------\n");
//	ft_printf("%x\n", 123);
//	ft_printf("%x\n", -123);
//	ft_printf("%-5x\n", 123);
//	ft_printf("%-5x\n", -123);
//	ft_printf("%+5x\n", 123);
//	ft_printf("%+5x\n", -123);
//	ft_printf("%#5x\n", 123);
//	ft_printf("%#5x\n", -123);
//	ft_printf("%05x\n", 123);
//	ft_printf("%05x\n", -123);
//	ft_printf("% 5x\n", 123);
//	ft_printf("% 5x\n", -123);
	
//	printf("%p\n", ptr);
//	printf("%p\n", ptr);
//	printf("%-5p\n", ptr);
//	printf("%-5p\n", ptr);
//	printf("%+5p\n", ptr);
//	printf("%+5p\n", ptr);
//	printf("%#5p\n", ptr);
//	printf("%#5p\n", ptr);
//	printf("%05p\n", ptr);
//	printf("%05p\n", ptr);
//	printf("% 5p\n", ptr);
//	printf("% 5p\n", ptr);
//	ft_putstr("----------------\n");
//	ft_printf("%p\n", ptr);
//	ft_printf("%p\n", ptr);
//	ft_printf("%-5p\n", ptr);
//	ft_printf("%-5p\n", ptr);
//	ft_printf("%+5p\n", ptr);
//	ft_printf("%+5p\n", ptr);
//	ft_printf("%#5p\n", ptr);
//	ft_printf("%#5p\n", ptr);
//	ft_printf("%05p\n", ptr);
//	ft_printf("%05p\n", ptr);
//	ft_printf("% 5p\n", ptr);
//	ft_printf("% 5p\n", ptr);
	return (0);
}
