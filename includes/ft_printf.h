/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:38:56 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/24 21:28:29 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"
# define WIDTH "123456789*"
# define FLAG "-+#0 "
typedef struct		s_flag
{
	int				width;
	int				minus;
	int				plus;
	int				hash;
	int				zero;
	int				space;
	int				precision;
}					t_flag;

typedef struct		s_sign
{
	int				pos;
	int				neg;
}					t_sign;

typedef struct		s_env
{
	va_list			arg;
	int				i;
	int				result;
	t_flag			flag;
	t_sign			sign;
}					t_env;

void				print_char(t_env *m);
void				print_str(t_env *m);
void				print_dec(t_env *m);
void				check_flag(const char *fmt, t_env *m);
void				check_specifier(const char *fmt, t_env *m);
void				init_env(t_env *m);
int					ft_printf(const char *fmt, ...);
#endif
