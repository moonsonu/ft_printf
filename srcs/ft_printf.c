/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:23:50 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/17 18:30:58 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	print_char(t_env *m)
{
	char	c;
	char	tmp;

	c = va_arg(m->arg, int);
	tmp = ' ';
	if (m->flag.minus == 1)
	{
		m->result += write(1, &c, 1);
		while ((m->flag.width)-- > 1)
			m->result += write(1, &tmp, 1);
	}
	else
	{
		while ((m->flag.width)-- > 1)
			m->result += write(1, &tmp, 1);
		m->result += write(1, &c, 1);
	}
}

void	print_str(t_env *m)
{
	char	*s;
	char	tmp;
	int		len;

	s = va_arg(m->arg, char*);
	len = m->flag.width - ft_strlen(s);
	printf("len[%d]\n", len);
	tmp = ' ';
	if (m->flag.minus == 1)
	{
		m->result += write(1, s, ft_strlen(s));
		if (len > 0)
		{
			while (len-- > 0)
				m->result += write(1, &tmp, 1);
		}
	}
	else
	{
		if (len > 0)
		{
			while (len-- > 0)
				m->result += write(1, &tmp, 1);
			m->result += write(1, s, ft_strlen(s));
		}
		else
			m->result += write(1, s, ft_strlen(s));
	}
}

void	print_dec(t_env *m)
{
	/*
	**flag '0' is ignored when flag '-' is present
	**flag ' ' is ignored when flag '+' is present
	*/
	int		i;
	int		d;
	char	*dec;
	char	tmp;
	int		len;

	i = -1;
	d = va_arg(m->arg, int);
	m->flag.zero == 1 ? (tmp = '0') : (tmp = ' ');
	dec = ft_itoa(d);
	len = m->flag.width - ft_strlen(dec);
	if (m->flag.minus == 1)
	{
		tmp = ' ';
		m->result += write(1, dec, ft_strlen(dec));
		if (len > 0)
		{
			while (len-- > 0)
				m->result += write(1, &tmp, 1);
		}
	}
	else
	{
		if (len > 0)
		{
			while (len-- > 0)
				m->result += write(1, &tmp, 1);
			m->result += write(1, dec, ft_strlen(dec));
		}	
		else
			m->result += write(1, dec, ft_strlen(dec));
	}
}

void	check_specifier(const char *fmt, t_env *m)
{
	if (ft_strchr(&fmt[m->i], 'c'))
		print_char(m);
	else if (ft_strchr(&fmt[m->i], 's'))
		print_str(m);
	else if (ft_strchr(&fmt[m->i], 'd') || ft_strchr(&fmt[m->i], 'i'))
		print_dec(m);
	/*if (ft_strchr(&fmt[m->i], 'p'))
	  print_paddr;
	  if (ft_strchr(&fmt[m->i], 'u'))
	  print_unint;
	  if (ft_strchr(&fmt[m->i], 'o'))
	  print_oct;
	  if (ft_strchr(&fmt[m->i], 'x') || ft_strchr(&fmt[m->i], 'X'))
	  printf_hex;*/
}

void	check_flag(const char *fmt, t_env *m)
{
	m->i++;
	while(ft_strchr(FLAG, fmt[m->i]))
	{
		if (ft_strchr(&fmt[m->i], '-'))
			m->flag.minus = 1;
		if (ft_strchr(&fmt[m->i], '+'))
			m->flag.plus = 1;
		if (ft_strchr(&fmt[m->i], '#'))
			m->flag.hash = 1;
		if (ft_strchr(&fmt[m->i], '0'))
			m->flag.zero = 1;
		if (ft_strchr(&fmt[m->i], ' '))
			m->flag.space = 1;
		m->i++;
		//printf("fmt[%d] = %c\n", m->i, fmt[m->i]);
	}
}

void	init_env(t_env *m)
{
	m->i = -1;
	m->flag.width = 0;
	m->flag.minus = 0;
	m->flag.plus = 0;
	m->flag.hash = 0;
	m->flag.zero = 0;
	m->flag.space = 0;
}

int		ft_printf(const char *fmt, ...)
{
	t_env		m;

	ft_bzero(&m, sizeof(t_env));
	init_env(&m);
	va_start (m.arg, fmt);
	while (fmt[++(m.i)] != '\0')
	{
		if (fmt[m.i] == '%' && fmt[(m.i) + 1] == '%')
			m.result += write(1, "%", 1);
		if (fmt[m.i] == '%' && fmt[(m.i) + 1] != '%')
		{
			check_flag(fmt, &m);
			while (ft_strchr(WIDTH, fmt[m.i]))
			{
				m.flag.width = ft_atoi(&fmt[m.i]);
				m.i++;
				//printf("width[%d] m.i[%d]\n", m.flag.width, m.i);
			}
			//printf("fmt[%d] = [%c]\n", m.i, fmt[m.i]);
			check_specifier(fmt, &m);
		}
		if (ft_strchr(&fmt[m.i], '\n'))
		{
			m.result += write(1, "\n", 1);
			break;
		}
	}
	va_end(m.arg);
	return (m.result);
}
