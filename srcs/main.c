/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:09:01 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/14 21:32:41 by ksonu            ###   ########.fr       */
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

//	printf("%c\n", c[1]);
//	ft_printf("%c\n", c[1]);
//	printf("%s\n", c);
//	ft_printf("%s\n", c);
//	printf("%%\n");
//	ft_printf("%%\n");
//	printf("%d\n", 1124);
//	ft_printf("%3d", 11);
//	printf("sdfsdf\n");
	printf("%-d", 123);
	printf("sdfsdf\n");
	printf("%-7d", 123);
	printf("sdfsdf\n");
	printf("%+5d\n", 123);
//	printf("%#d", 123);
	printf("%09d\n", 123);
	printf("% d\n", -123);
//	printf("% c\n", c[1]);
//	printf("%u\n", -1234);
//	printf("%u\n", 1234);
	return (0);
}
