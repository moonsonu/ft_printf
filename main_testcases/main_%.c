/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_%.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 23:59:38 by sding             #+#    #+#             */
/*   Updated: 2018/05/01 18:58:49 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%%\n", "this is w/o ' ' flag:");
	printf("%s% %\n", "this is w/ ' ' flag :");

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%%\n", "this is w/o '+' flag:");
	printf("%s%+%\n\n", "this is w/ '+' flag :");

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%%\n", "this is w/o '-' flag:");
	printf("%s%-%\n\n", "this is w/ '-' flag :");

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%10%\n", "this is w/o '-' flag:");
	printf("%s%-10%\n\n", "this is w/ '-' flag :");

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%%\n", "this is w/o '0' flag:");
	printf("%s%0%\n\n", "%0% :");
	printf("%s%04%\n\n", "%04% :");

	printf("%s%10%\n", "%10%, 123	:");
	printf("%s%010%\n", "%010%, 123	:");
	printf("%s%-010%\n", "%-010%, 123	:");
	printf("%s%01%\n", "%01%, 123	:");
	printf("%s%0%\n", "%0%, 123	:");

	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%%\n", "this is w/o '.' precision, '*':");
	printf("%s%.%\n", "this is w/ '.' precision, '*' :");
	printf("%s%10%\n", "%10%\t	:");
	printf("%s%1%\n", "%1%\t	:");
	printf("%s%.1%\n", "%.1%\t	:");
	printf("%s%10.%\n", "%10.%\t	:");
	printf("%s%10.10%\n", "%10.10%\t	:");
	printf("%s%10.6%\n", "%10.6%\t	:");
	printf("%s%6.%\n", "%s%6.%\t	:");
	printf("%s%4.5%\n", "%4.5%\t	:");
	printf("%s%4%\n", "%4%\t	:");
	printf("%s%.5%\n", "%.5%\t	:");
	printf("%s%10.-3%\n", "%10.-3%\t	:"); // check this case
	printf("%s%10.-2%\n", "%10.-2%\t	:"); // check this case

	printf("-----------------------------------------\n\n");
	// flag_hash
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%#%\n", "%#%\t	:");
	printf("%s%#3%\n", "%#3%\t	:");

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%0%\n", "%0%\t	:");
	printf("%s%03%\n", "%03%\t	:");
	return (0);
}
