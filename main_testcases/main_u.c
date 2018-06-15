/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 22:52:01 by sding             #+#    #+#             */
/*   Updated: 2018/05/17 16:34:23 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%u\n", "this is w/o ' ' flag:", 123);
	printf("%s% u\n", "this is w/ ' ' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%u\n", "this is w/o '+' flag:", 123);
	printf("%s%+u\n\n", "this is w/ '+' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%u\n", "this is w/o '-' flag:", 123);
	printf("%s%-u\n\n", "this is w/ '-' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10u\n", "this is w/o '-' flag, 10 width:", 123);
	printf("%s%-10u\n", "this is w/ '-' flag, 10 width :", 123);

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%u\n", "this is w/o '0' flag:", 123);
	printf("%s%0u\n\n", "%0u :", 123);
	printf("%s%04u\n\n", "%04u :", 123);

	printf("%s%10u\n", "%10u, 123	:", 123);
	printf("%s%010u\n", "%010u, 123	:", 123);
	printf("%s%-010u\n", "%-010u, 123	:", 123);
	printf("%s%01u\n", "%01u, 123	:", 123);
	printf("%s%0u\n", "%0u, 123	:", 123);

	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%u\n", "this is w/o '.' precision, '*':", 123);
	printf("%s%.u\n", "this is w/ '.' precision, '*' :", 123);
	printf("%s%10u\n", "%10u\t	:", 123);
	printf("%s%1u\n", "%1u\t	:", 123);
	printf("%s%.1u\n", "%.1u\t	:", 123);
	printf("%s%10.u\n", "%10.u\t	:", 123);
	printf("%s%10.10u\n", "%10.10u\t	:", 123);
	printf("%s%10.6u\n", "%10.6u\t	:", 123);
	printf("%s%6.u\n", "%s%6.u\t	:", 123);
	printf("%s%4.5u\n", "%4.5u\t	:", 123);
	printf("%s%4u\n", "%4u\t	:", 123);
	printf("%s%.5u\n", "%.5u\t	:", 123);
	printf("%s%10.-3u\n", "%10.-3u\t	:", 123);
	printf("%s%10.-2u\n", "%10.-2u\t	:", 123);
	printf("%s%2u\n", "%2u\t	:", 123);
	printf("%s%.2u\n", "%.2u\t	:", 123);
	printf("%s%6.4u\n", "%6.4u\t	:", 123);
	printf("%s%2.4u\n", "%2.4u\t	:", 123);
	printf("%s%2u\n", "%2u\t	:", 123);
	printf("%s%2.u\n", "%2.u\t	:", 123);
	printf("%s%-.6u\n", "%-.6u\t	:", 123);
	printf("%s%.6u\n", "%.6u\t	:", 123);
	printf("%s%-6.u\n", "%-6.u\t	:", 123);
	printf("%s%-6.2u\n", "%-6.2u\t	:", 123);
	printf("%s%-.4u\n", "%-.4u\t	:", 123);
	printf("%s%6.2u\n", "%6.2u\t	:", 123);
	printf("%s%6.5u\n", "%6.5u\t	:", 123);
	printf("%s%#.3u\n", "%#.3u\t	:", 123);
	printf("%s%#3.u\n", "%#3.u\t	:", 123);
	printf("%s%-.2u\n", "%-.2u\t	:", 123);
}
