/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:50:15 by sding             #+#    #+#             */
/*   Updated: 2018/04/17 15:50:18 by sding            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%d\n", "this is w/o ' ' flag:", 12345);
	printf("%s% d\n", "this is w/ ' ' flag :", 12345);

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	// printf("flag_plus~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("%s%d\n", "this is w/o '+' flag:", 12345);
	printf("%s%+d\n\n", "this is w/ '+' flag :", 12345);
	printf("%s%d\n", "this is w/o '+' flag:", -12345);
	printf("%s%+d\n", "this is w/ '+' flag :", -12345);

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%d\n", "this is w/o '-' flag:", 12345);
	printf("%s%-d\n", "this is w/ '-' flag :", 12345);

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10d\n", "this is w/o '-' flag, 10 width:", 12345);
	printf("%s%-10d\n", "this is w/ '-' flag, 10 width :", 12345);

	printf("-----------------------------------------\n\n");

	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%d\n", "this is w/o '.' precision, '*':", 12345);
	printf("%s%.d\n", "this is w/ '.' precision, '*' :", 12345);
	printf("%s%s%10d\n", "%10d\t","this is w/o '.' precision, but w/ field with 10:", 12345);
	printf("%s%s%10.d\n", "%10.d\t","this is w/ '.' precision, but w/ field with 10 :", 12345);
	printf("%s%s%10.10d\n", "%10.10d\t","this is w/ '.' precision, but w/ field with 10 :", 12345);
	printf("%s%s%10.6d\n", "%10.6d\t","this is w/ '.' precision, but w/ field with 10 :", 12345);
	printf("%s%s%6.d\n", "%s%6.d\t", "this is w/ '.' precision, but w/ field with 10 :", 12345);
	printf("%s%s%6.7d\n", "%6.7d\t", "this is w/ '.' precision, but w/ field with 10 :", 12345);
	printf("%s%s%10.-3d\n", "%10.-3d\t", "this is w/ '.' precision, but w/ field with 10 :", 12345);

	printf("\n");
	printf("\n	precision '.' w/ '-' sign after		         \n     \t\t\t\t\t \n");
	printf("%s%+42.7d\n", "this is %s%+42.7d 	:", 12345);
	printf("%s%+42.-7d\n", "this is %s%+42.-7d	:", 12345);


	printf("\n	precision '.' w/ '-' 		         \n     \t\t\t\t\t \n");
	printf("%s%.d\n", "example: '%.d', 12345		:", 12345);
	printf("%s%. d\n", "example: '%. d', 12345		:", 12345);
	printf("%s%0 .6d\n", "example: '% .6d', 12345		:", 12345);
	printf("%s% 6.d\n", "example: '% 6.d', 12345		:", 12345);
	printf("%s%.d\n", "example: '%.d', -12345		:", -12345);
	printf("%s% .d\n", "example: '% .d', 12345		:", 12345);
	printf("%s% .d\n", "example: '% .d', 0		:", 0);
	printf("%s% d\n", "example: '% d', 0		:", 0);
	printf("%s% .+d\n", "example: '% .+d', 12345		:", 12345);
	printf("%s%+ .d\n", "example: '%+ .d', 12345		:", 12345);
	printf("%s% .d\n", "example: '% .d', 12345		:", 12345);
	printf("%s%.+10d\n", "example: '%.+10d', 12345	:", 12345);
	printf("%s%-.+10d\n", "example: '%-.+10d', 12345	:", 12345);
	printf("%s%#.+10d\n", "example: '%#.+10d', 12345	:", 12345);
	printf("%s%.+10d\n", "example: '%.+10d', -12345	:", -12345);
	printf("%s%.10d\n", "example: '%.10d', 12345		:", 12345);
	printf("%s%10.-10d\n", "example: '%10.-10d', 12345	:", 12345);
	printf("%s%.10d\n", "example: '%.10d', -12345	:", -12345);
	printf("%s%10.10d\n", "example: '%10.10d', -12345	:", -12345);
	printf("%s%10.10d\n", "example: '%10.10d', 12345	:", 12345);
	printf("%s%10.6d\n", "example: '%10.6d', 12345	:", 12345);
	printf("%s%10.6d\n", "example: '%10.6d', -12345	:", -12345);
	printf("%s%6.10d\n", "example: '%6.10d', -12345	:", -12345);
	printf("%s% 6.10d\n", "example: '% 6.10d', 12345	:", 12345);
	printf("%s% 10.6d\n", "example: '% 10.6d', 12345	:", 12345);
	printf("%s%+10.6d\n", "example: '%+10.6d', 12345	:", 12345);
	printf("%s%10.6d\n", "example: '%10.6d', -12345	:", -12345);
	printf("%s%+6.10d\n", "example: '%+6.10d', 12345	:", 12345);
	printf("%s%-.10d\n", "example: '%-.10d', 12345	:", 12345);
	printf("%s%-.10d\n", "example: '%-.10d', -12345	:", -12345);
	printf("%s%- 10d\n", "example: '%- 10d', 12345	:", 12345);
	printf("%s%.-10d\n", "example: '%.-10d', 12345	:", 12345);
	printf("%s%.-10d\n", "example: '%.-10d', -12345	:", -12345);
	printf("%s%-.-10d\n", "example: '%-.-10d', 12345	:", 12345);
	printf("%s%-.-10d\n", "example: '%-.-10d', -12345	:", -12345);
	printf("%s% 6d\n", "example: '% 6d', 12345		:", 12345);
	printf("%s% 6d\n", "example: '% 6d', -12345		:", -12345);
	printf("%s% 6+d\n", "example: '% 6+d', 12345		:", 12345);
	printf("%s% +4\n", "example: '% +4', 12345		:", 12345);


	printf("-----------------------------------------\n\n");

	//field width '*'
	printf("\n	field width '*'		         \n     \t\t\t\t\t \n");
	printf("%s%*d\n", "example: '%*d', 3  :", 3, 12345);
	printf("%s%*d\n", "example: '%*d', 6 :", 6, 12345);
	printf("%s%*d\n", "example: '%*d', -6 :", -6, 12345);
	printf("%s%.*d\n", "example: '%.*d', -6 :", -6, 12345);

	printf("-----------------------------------------\n\n");

	//try
	printf("\n	try		         \n     \t\t\t\t\t \n");
	printf("%s%.3f\n", "example: %.3f :", 12345.67);
	printf("abc%s\n", ": this is a example: abc%s");
	printf("%s%.*d\n", "example: '%.*d', 10  :", 10, 12345);
	printf("%s%.*d\n", "example: '%.*d', -10 :", -10, 12345);
	printf("%%d\n", 12345);
	printf("mina\n", 12345);
	printf("%+ -mina\n");
	printf("%+ -10%s", "try");

	// multiple flags testing
	printf("\n	multiple flags testing		         \n     \t\t\t\t\t \n");
	printf("%s%-10d \n", "example: '%-10d', 12345	:", 12345);
	printf("%s%010d \n", "example: '%010d', 12345	:", 12345);
	printf("%s%0-10d \n", "example: '%0-10d', 12345:", 12345);
	printf("%s%08.6d \n", "example: '%08.6d', 12345:", 12345);
	printf("%s%08.6d\n", "example: '%08.6d', 12345:", 12345);
	printf("%s%6.3d\n", "%6.4d\t	:", 123);
	printf("%s%-6.4d\n", "%-6.4d\t	:", 123);
	printf("%s%-+6.4d\n", "%-+6.4d\t	:", 123);
	printf("%s% +.4d\n", "%+.4d\t	:", 123);




	return (0);
}
