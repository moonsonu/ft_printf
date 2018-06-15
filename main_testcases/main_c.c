/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 10:13:20 by sding             #+#    #+#             */
/*   Updated: 2018/05/23 19:36:40 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%c\n", "this is w/o ' ' flag:", 'c');
	printf("%s% c\n", "this is w/ ' ' flag :", 'c');

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%c\n", "this is w/o '+' flag:", 'c');
	printf("%s%+c\n\n", "this is w/ '+' flag :", 'c');

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%c\n", "this is w/o '-' flag:", 'c');
	printf("%s%-c\n\n", "this is w/ '-' flag :", 'c');

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10c\n", "this is w/o '-' flag, 10 width:", 'c');
	printf("%s%-10c\n", "this is w/ '-' flag, 10 width :", 'c');

	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%c\n", "this is w/o '.' precision, '*':", 'c');
	printf("%s%.c\n", "this is w/ '.' precision, '*' :", 'c');
	printf("%s%s%10c\n", "%10c\t","this is w/o '.' precision, but w/ field with 10:", 'c');
	printf("%s%s%10.c\n", "%10.c\t","this is w/ '.' precision, but w/ field with 10 :", 'c');
	printf("%s%s%10.10c\n", "%10.10c\t","this is w/ '.' precision, but w/ field with 10 :", 'c');
	printf("%s%s%10.6c\n", "%10.6c\t","this is w/ '.' precision, but w/ field with 10 :", 'c');
	printf("%s%s%6.c\n", "%s%6.c\t", "this is w/ '.' precision, but w/ field with 10 :", 'c');
	printf("%s%s%2.3c\n", "%2.3c\t", "this is w/ '.' precision, but w/ field with 10 :", 'c');
	//printf("%s%s%10.-3c\n", "%10.-3c\t", "this is w/ '.' precision, but w/ field with 10 :", 'c');

	printf("\n");
	printf("\n	precision '.' w/ '-' sign after		         \n     \t\t\t\t\t \n");
	printf("%s%+42.7c\n", "this is %s%+42.7d 	:", 'c');
	printf("%s%+42.-7c\n", "this is %s%+42.-7d	:", 'c');

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%c\n", "this is w/o '0' flag:", 'c');
	printf("%s%0c\n\n", "this is w/ '0' flag :", 'c');

	printf("-----------------------------------------\n\n");
	// try
	printf("\n	try		         \n     \t\t\t\t\t \n");
	printf("%s%c\n", "'%c' w/o any arg:");
	// printf("%s%0c\n\n", "this is w/ '0' flag :", 'c');

	printf("%s%C\n", "'%C' w/o any arg:"); // not working!!!!!!
	printf("%s%02c\n", "'%c' w/o any arg:", 'a'); // this too !!!!!
}
