/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:23:50 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/23 21:22:54 by ksonu            ###   ########.fr       */
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

void	print_paddr(t_env *m)
{
	/*
	**flag '+' results in undefined behavior with 'p' conversion
	**flag '#' results in undefined behavior with 'p' conversion
	**flag '0' results in undefined behavior with 'p' conversion
	**flag ' ' results in undefined behavior with 'p' conversion
	*/

	unsigned long	p;
	char	*addr;
	char	tmp;
	int		len;

	p = va_arg(m->arg, unsigned long);
	addr = ft_ltoa_base(p, 16);
	addr = ft_strjoin("0x", ft_strlower(addr));
	len = m->flag.width - ft_strlen(addr);
	tmp = ' ';
	if (m->flag.minus == 1)
	{
		m->result += write(1, addr, ft_strlen(addr));
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
			m->result += write(1, addr, ft_strlen(addr));
		}
		else
			m->result += write(1, addr, ft_strlen(addr));
	}
}

char	*prep_dec(t_env *m)
{
	int		d;
	int		len;
	int		pre_len;
	char	*dec;
	char	*precision;

	d = va_arg(m->arg, int);
	dec = ft_itoa(d);
	if (*dec == '-')

	len = ft_strlen(dec);
	pre_len = m->flag.precision - len;
	precision = ft_strnew(pre_len);
	if (m->flag.precision > 0 || m->flag.precision > len)
	{
		while (pre_len-- > 0)
			precision[pre_len] = '0';
		dec = ft_strjoin(precision, dec);
	}
	return (dec);
}

void	print_dec(t_env *m)
{
	/*
	 **flag '0' is ignored when flag '-' is present
	 **flag ' ' is ignored when flag '+' is present
	 */
//	int		d;
	char	*dec;
	char	tmp;
	int		len;

//	d = va_arg(m->arg, int);
	m->flag.zero == 1 ? (tmp = '0') : (tmp = ' ');
//	dec = ft_itoa(d);
	dec = prep_dec(m);
	if (m->flag.plus == 1)
		dec = ft_strjoin("+", dec);
	if (m->flag.space == 1)
	{
		if (!ft_strchr(dec, '-'))
			dec = ft_strjoin(" ", dec);
	}
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

void	print_unint(t_env *m)
{
	/*
	 **flag '+' results in undefined behavior with 'u' conversion
	 **flag '#' results in undefined behavior with 'u' conversion
	 **flag ' ' results in undefined behavior with 'u' conversion
	 */
	long	u;
	char	*unint;
	char	tmp;
	int		len;

	u = va_arg(m->arg, long);
	m->flag.zero == 1 ? (tmp = '0') : (tmp = ' ');
	if (u == LLONG_MIN || u == LONG_MIN)
		unint = ft_strdup("-9223372036854775808");
	unint = ft_ltoa(u);
	len = m->flag.width - ft_strlen(unint);
	if (m->flag.minus == 1)
	{
		tmp = ' ';
		m->result += write(1, unint, ft_strlen(unint));
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
			m->result += write(1, unint, ft_strlen(unint));
		}	
		else
			m->result += write(1, unint, ft_strlen(unint));
	}
}

void	print_oct(t_env *m)
{
	/*
	 **flag '+' results in undefined behavior with 'o' conversion
	 **flag ' ' results in undefined behavior with 'o' conversion
	 */
	long	o;
	char	*oct;
	char	tmp;
	int		len;

	o = va_arg(m->arg, long);
	m->flag.zero == 1 ? (tmp = '0') : (tmp = ' ');
	oct = ft_ltoa_base(o, 8);
	len = m->flag.width - ft_strlen(oct);
	if (m->flag.hash == 1)
	{
		len -= 1;
		oct = ft_strjoin("0", oct);
	}
	if (m->flag.minus == 1)
	{
		tmp = ' ';
		m->result += write(1, oct, ft_strlen(oct));
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
			m->result += write(1, oct, ft_strlen(oct));
		}	
		else
			m->result += write(1, oct, ft_strlen(oct));
	}
}

void	print_hex(const char *fmt, t_env *m)
{
	/*
	 **flag '+' results in undefined behavior with 'u' conversion
	 **flag ' ' results in undefined behavior with 'u' conversion
	 */
	long	h;
	char	*hex;
	char	tmp;
	int		len;

	h = va_arg(m->arg, long);
	m->flag.zero == 1 ? (tmp = '0') : (tmp = ' ');
	hex = ft_ltoa_base(h, 16);
	len = m->flag.width - ft_strlen(hex);
	if (m->flag.hash == 1)
	{
		len -= 2;
		hex = ft_strjoin("0x", hex);
	}
	if (ft_strchr(&fmt[m->i], 'x'))
		ft_strlower(hex);
	if (m->flag.minus == 1)
	{
		tmp = ' ';
		m->result += write(1, hex, ft_strlen(hex));
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
			m->result += write(1, hex, ft_strlen(hex));
		}	
		else
			m->result += write(1, hex, ft_strlen(hex));
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
	if (ft_strchr(&fmt[m->i], 'u'))
		print_unint(m);
	if (ft_strchr(&fmt[m->i], 'p'))
	  print_paddr(m);
	if (ft_strchr(&fmt[m->i], 'o') || ft_strchr(&fmt[m->i], 'O'))
		print_oct(m);
	if (ft_strchr(&fmt[m->i], 'x') || ft_strchr(&fmt[m->i], 'X'))
		print_hex(fmt, m);
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
		//m->i++;
		//printf("fmt[%d] = %c\n", m->i, fmt[m->i]);
	}
}

void	check_precision(const char *fmt, t_env *m)
{
	m->i++;
	if (ft_strchr(WIDTH, fmt[m->i]))
	{
		m->flag.precision = ft_atoi(&fmt[m->i]);
		while (fmt[m->i] >= '0' && fmt[m->i] <= '9')
			m->i++;
	}
}

/*void	check_length(const char *fmt, t_env *m)
{

}*/

void	init_env(t_env *m)
{
	m->i = -1;
	m->flag.width = 0;
	m->flag.minus = 0;
	m->flag.plus = 0;
	m->flag.hash = 0;
	m->flag.zero = 0;
	m->flag.space = 0;
	m->flag.precision = 0;
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
			if (ft_strchr(WIDTH, fmt[m.i]))
			{
				m.flag.width = ft_atoi(&fmt[m.i]);
				while (fmt[m.i] >= '0' && fmt[m.i] <= '9')
					m.i++;
			}
			if (fmt[m.i] == '.')
				check_precision(fmt, &m);
			//check_length(fmt, &m);
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
