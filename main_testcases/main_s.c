/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 10:58:01 by sding             #+#    #+#             */
/*   Updated: 2018/04/25 10:58:04 by sding            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{

	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%s\n", "this is w/o ' ' flag:", "abc");
	printf("%s% s\n", "this is w/ ' ' flag :", "abc");

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%s\n", "this is w/o '+' flag:", "abc");
	printf("%s%+s\n\n", "this is w/ '+' flag :", "abc");

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%s\n", "this is w/o '-' flag:", "abc");
	printf("%s%-s\n\n", "this is w/ '-' flag :", "abc");

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10s\n", "this is w/o '-' flag, 10 width:", "abc");
	printf("%s%-10s\n", "this is w/ '-' flag, 10 width :", "abc");

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%s\n", "this is w/o '0' flag:", "abc");
	printf("%s%0s\n\n", "this is w/ '0' flag :", "abc");

	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%s\n", "this is w/o '.' precision, '*':", "abc");
	printf("%s%.s\n", "this is w/ '.' precision, '*' :", "abc");
	printf("%s%10s\n", "%10s\t	:", "abc");
	printf("%s%10.s\n", "%10.s\t	:", "abc");
	printf("%s%10.10s\n", "%10.10s\t	:", "abc");
	printf("%s%10.6s\n", "%10.6s\t	:", "abc");
	printf("%s%6.s\n", "%s%6.s\t	:", "abc");
	printf("%s%4.5s\n", "%4.5s\t	:", "abc");
	printf("%s%4s\n", "%4s\t	:", "abc");
	printf("%s%.5s\n", "%.5s\t	:", "abc");
	printf("%s%10.-3s\n", "%10.-3s\t	:", "abc");
	printf("%s%10.-2s\n", "%10.-2s\t	:", "abc");
	printf("%s%2s\n", "%2s\t	:", "abc");
	printf("%s%.2s\n", "%.2s\t	:", "abc");
	printf("%s%6.4s\n", "%6.4s\t	:", "abc");
	printf("%s%2.4s\n", "%2.4s\t	:", "abc");
	printf("%s%2s\n", "%2s\t	:", "abc");
	printf("%s%2.s\n", "%2.s\t	:", "abc");
	printf("%s%-.6s\n", "%-.6s\t	:", "abc");
	printf("%s%.6s\n", "%.6s\t	:", "abc");
	printf("%s%-6.s\n", "%-6.s\t	:", "abc");
	printf("%s%-6.2s\n", "%-6.2s\t	:", "abc");
	printf("%s%6.2s\n", "%6.2s\t	:", "abc");
	printf("%s%6.5s\n", "%6.5s\t	:", "abc");
	printf("%s%6s\n", "%6s\t	:", "abc");

	printf("\n");
	printf("\n	precision '.' w/ '-' sign after		         \n     \t\t\t\t\t \n");
	printf("%s%42.7s\n", "this is %s%+42.7s 	:", "abc");
	printf("%s%42.-7s\n", "this is %s%+42.-7s	:", "abc");

	printf("-----------------------------------------\n\n");

	//field width '*'
	printf("\n	field width '*'		         \n     \t\t\t\t\t \n");
	printf("%s%*s\n", "example: '%*s', 4  :", 4, "abc");
	printf("%s%*s\n", "example: '%*s', 6 :", 6, "abc");
	printf("%s%*s\n", "example: '%*s', -6 :", -6, "abc");
	printf("%s%.*s\n", "example: '%.*s', -6 :", -6, "abc");
	printf("%s%.-6s\n", "example: '%.-6s' :", "abc");

	printf("-----------------------------------------\n\n");
	// try
	//this will cause segmentation fault
	// printf("%s%S", "'%S' w/o any arg	:");
	// printf("%s%ls", "'%ls' w/o any arg	:");
	printf("\n	try		         \n     \t\t\t\t\t \n");
	printf("the two below will cause segmentation fault");
	printf("printf('%s%ls', '%ls' w/o any arg	:/n");
	printf("printf('%s%S', '%S' w/o any arg	:/n");



}
