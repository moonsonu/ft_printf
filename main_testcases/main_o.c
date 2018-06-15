/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 16:47:09 by sding             #+#    #+#             */
/*   Updated: 2018/04/27 16:47:10 by sding            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%o\n", "this is w/o ' ' flag:", 123);
	printf("%s% o\n", "this is w/ ' ' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%o\n", "this is w/o '+' flag:", 123);
	printf("%s%+o\n\n", "this is w/ '+' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%o\n", "this is w/o '-' flag:", 123);
	printf("%s%-o\n\n", "this is w/ '-' flag :", 123);

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10o\n", "this is w/o '-' flag, 10 width:", 123);
	printf("%s%-10o\n", "this is w/ '-' flag, 10 width :", 123);

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%o\n", "this is w/o '0' flag:", 123);
	printf("%s%0o\n\n", "this is w/ '0' flag :", 123);

	printf("%s%10o\n", "%10o, 123	:", 123);
	printf("%s%010o\n", "%010o, 123	:", 123);
	printf("%s%-010o\n", "%-010o, 123	:", 123);
	printf("%s%01o\n", "%01o, 123	:", 123);
	printf("%s%0o\n", "%0o, 123	:", 123);

	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%o\n", "%o\t	:", 123);
	printf("%s%.o\n", "%.o\t	:", 123);
	printf("%s%10o\n", "%10o\t	:", 123);
	printf("%s%1o\n", "%1o\t	:", 123);
	printf("%s%.1o\n", "%.1o\t	:", 123);
	printf("%s%10.o\n", "%10.o\t	:", 123);
	printf("%s%10.10o\n", "%10.10o\t	:", 123);

	printf("%s%10.6o\n", "%10.6o\t	:", 123);
	printf("%s%6.o\n", "%s%6.o\t	:", 123);
	printf("%s%4.5o\n", "%4.5o\t	:", 123);
	printf("%s%4o\n", "%4o\t	:", 123);
	printf("%s%.5o\n", "%.5o\t	:", 123);
	printf("%s%10.-3o\n", "%10.-3o\t	:", 123);
	printf("%s%10.-2o\n", "%10.-2o\t	:", 123);
	printf("%s%2o\n", "%2o\t	:", 123);
	printf("%s%.2o\n", "%.2o\t	:", 123);
	printf("%s%6.4o\n", "%6.4o\t	:", 123);
	printf("%s%2.4o\n", "%2.4o\t	:", 123);
	printf("%s%2o\n", "%2o\t	:", 123);
	printf("%s%2.o\n", "%2.o\t	:", 123);


	// precision
	printf("\n	try		         \n     \t\t\t\t\t \n");
	printf("%s%#o\n", "%#o\t	:", 123);
	printf("%s%#10o\n", "%#10o\t	:", 123);
	printf("%s%#10O\n", "%#10O\t	:", 123);




}
