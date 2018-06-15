/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:09:01 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/13 20:10:57 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	c[] = "moon";

//	printf("%c\n", c[1]);
//	ft_printf("%c\n", c[1]);
//	printf("%s\n", c);
//	ft_printf("%s\n", c);
//	printf("%%\n");
//	ft_printf("%%\n");
//	printf("%d\n", 1124);
	ft_printf("%3d", 11);
	printf("sdfsdf\n");
	ft_printf("%-3d", 11);
	printf("sdfsdf\n");
	return (0);
}
