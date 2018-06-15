/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 13:28:26 by sding             #+#    #+#             */
/*   Updated: 2018/05/14 21:36:24 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int x;
	int *ptr;  /* pointer variable declaration */

	x = 2;
	ptr = &x; /* store address of x in pointer variable*/

	printf("variable x is at address: %p\n", (void*)&x);

	// flag_space
	printf("\n	flag_space		         \n     \t\t\t\t\t \n");
	printf("%s%p\n", "%p, (void*)&x	:", (void*)&x);
	printf("%s% p\n", "%p, (void*)&x	:", (void*)&x);

	printf("-----------------------------------------\n\n");
	// flag_plus
	printf("\n	flag_plus		         \n     \t\t\t\t\t \n");
	printf("%s%p\n", "%p, (void*)&x	:", (void*)&x);
	printf("%s%+p\n\n", "%+p, (void*)&x	:", (void*)&x);

	printf("-----------------------------------------\n\n");
	// flag_minus
	printf("\n	flag_minus		         \n     \t\t\t\t\t \n");
	printf("%s%p\n", "%p, (void*)&x	:", (void*)&x);
	printf("%s%-p\n\n", "%-p, (void*)&x	:", (void*)&x);

	printf("-----------------------------------------\n\n");
	// flag_minus w/ field width 10
	printf("%s%15p\n", "%15p, (void*)&x	:", (void*)&x);
	printf("%s%-15p\n\n", "%-15p, (void*)&x:", (void*)&x);

	printf("-----------------------------------------\n\n");
	// flag_zero
	printf("\n	flag_zero		         \n     \t\t\t\t\t \n");
	printf("%s%p\n", "%p, (void*)&x	:", (void*)&x);
	printf("%s%0p\n\n", "%0p, (void*)&x	:", (void*)&x);


	printf("-----------------------------------------\n\n");
	// precision
	printf("\n	precision		         \n     \t\t\t\t\t \n");
	printf("%s%p\n", "%p, (void*)&x	:", (void*)&x);
	printf("%s%.p\n\n", "%.p, (void*)&x	:", (void*)&x);
	printf("%s%.15p\n", "%.15p, (void*)&x	:", (void*)&x);
	printf("%s%.10p\n\n", "%.10p, (void*)&x	:", (void*)&x);
	printf("%s%15.15p\n", "%15.15p, (void*)&x	:", (void*)&x);
	printf("%s%18.15p\n", "%18.15p, (void*)&x	:", (void*)&x);
	printf("%s%15.14p\n", "%15.14p, (void*)&x	:", (void*)&x);
	printf("%s%-.10p\n\n", "%-.10p, (void*)&x	:", (void*)&x);
	printf("%s%-15.15p\n", "%-15.15p, (void*)&x	:", (void*)&x);
	printf("%s%-18.15p\n", "%-18.15p, (void*)&x	:", (void*)&x);
	printf("%s%-15.14p\n", "%-15.14p, (void*)&x	:", (unsigned long int*)&x);

	printf("%p\n", ptr);
	return (0);
}
