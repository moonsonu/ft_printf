/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:23:50 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/13 15:26:34 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(t_env *m)
{
	char	c;

	c = va_arg(m->arg, int);
	m->result += write(1, &c, 1);
}

void	check_specifier(const char *fmt, t_env *m)
{
	if (ft_strchr(&fmt[m->i], 'c'))
		print_char(m);
	//if (ft_strchr(&fmt[m->i], 's'))
	//	print_str(m);
}

int		ft_printf(const char *fmt, ...)
{
	t_env		m;

	ft_bzero(&m, sizeof(t_env));
	m.i = -1;
	va_start (m.arg, fmt);
	while (fmt[++(m.i)] != '\0')
	{
		if (fmt[m.i] == '%')
			check_specifier(&fmt[(m.i)++], &m);
	}
	va_end(m.arg);
	return (m.result);
}
