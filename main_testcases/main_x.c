/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 18:48:31 by sding             #+#    #+#             */
/*   Updated: 2018/04/26 18:48:33 by sding            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%x\n", "this is w/o ' ' flag:", 123);
	printf("%s% x\n", "this is w/ ' ' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%x\n", "this is w/o '+' flag:", 123);
	printf("%s%+x\n\n", "this is w/ '+' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%x\n", "this is w/o '-' flag:", 123);
	printf("%s%-x\n\n", "this is w/ '-' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10x\n", "this is w/o '-' flag, 10 width:", 123);
	printf("%s%-10x\n", "this is w/ '-' flag, 10 width :", 123);

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%x\n", "this is w/o '0' flag:", 123);
	printf("%s%0x\n\n", "this is w/ '0' flag :", 123);

	printf("%s%10x\n", "%10x, 123	:", 123);
	printf("%s%010x\n", "%010x, 123	:", 123);
	printf("%s%010d\n", "%010d, 123	:", 123);
	printf("%s%-010x\n", "%-010x, 123	:", 123);
	printf("%s%-010d\n", "%-010d, 123	:", 123);
	printf("%s%01x\n", "%01x, 123	:", 123);
	printf("%s%0x\n", "%0x, 123	:", 123);

	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%x\n", "this is w/o '.' precision, '*':", 123);
	printf("%s%.x\n", "this is w/ '.' precision, '*' :", 123);
	printf("%s%10x\n", "%10x\t	:", 123);
	printf("%s%1x\n", "%1x\t	:", 123);
	printf("%s%.1x\n", "%.1x\t	:", 123);
	printf("%s%10.x\n", "%10.x\t	:", 123);
	printf("%s%10.10x\n", "%10.10x\t	:", 123);
	printf("%s%10.6x\n", "%10.6x\t	:", 123);
	printf("%s%6.x\n", "%s%6.x\t	:", 123);
	printf("%s%4.5x\n", "%4.5x\t	:", 123);
	printf("%s%4x\n", "%4x\t	:", 123);
	printf("%s%.5x\n", "%.5x\t	:", 123);
	printf("%s%10.-3x\n", "%10.-3x\t	:", 123);
	printf("%s%10.-2x\n", "%10.-2x\t	:", 123);
	printf("%s%2x\n", "%2x\t	:", 123);
	printf("%s%.2x\n", "%.2x\t	:", 123);
	printf("%s%6.4x\n", "%6.4x\t	:", 123);
	printf("%s%2.4x\n", "%2.4x\t	:", 123);
	printf("%s%2x\n", "%2x\t	:", 123);
	printf("%s%2.x\n", "%2.x\t	:", 123);
	printf("%s%-.6x\n", "%-.6x\t	:", 123);
	printf("%s%.6x\n", "%.6x\t	:", 123);
	printf("%s%-6.x\n", "%-6.x\t	:", 123);
	printf("%s%-6.2x\n", "%-6.2x\t	:", 123);
	printf("%s%-.4x\n", "%-.4x\t	:", 123);
	printf("%s%6.2x\n", "%6.2x\t	:", 123);
	printf("%s%6.5x\n", "%6.5x\t	:", 123);
	printf("%s%#.3x\n", "%#.3x\t	:", 123);
	printf("%s%#3.x\n", "%#3.x\t	:", 123);
	printf("%s%#10.6x\n", "%#10.6x\t	:", 123);
	printf("%s%#.6x\n", "%#.6x\t	:", 123);
	printf("%s%#6x\n", "%#6x\t	:", 123);
	printf("%s%#x\n", "%#x\t	:", 123);
	printf("%s%#3x\n", "%#3x\t	:", 123);
	printf("%s%#3.5x\n", "%#3.5x\t	:", 123);
	printf("%s%#6.3x\n", "%#6.3x\t	:", 123);
	printf("%s%#-6.3x\n", "%#-6.3x\t	:", 123);
	printf("%s%#-6x\n", "%#-5x\t	:", 123);
	printf("%s%#6.4x\n", "%#6.4x\t	:", 123);
	printf("%s%#7.4x\n", "%#7.4x\t	:", 123);
	printf("%s%#4.6x\n", "%#4.6x\t	:", 123);
	printf("%s%08.6x\n", "%08.6x\t	:", 123);

	printf("%s%010x\n", "%010x\t	:", 123);
	printf("%s%0-10x\n", "%0-10x\t	:", 123);
	printf("%s%08.6x\n", "%08.6x\t	:", 123);
	printf("%s%08.6x\n", "%08.6x\t	:", 123);
	printf("%s%#08x\n", "%#08x\t	:", 123);
}
