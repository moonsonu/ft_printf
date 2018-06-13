/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:38:56 by ksonu             #+#    #+#             */
/*   Updated: 2018/06/13 14:56:22 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"
# include "get_next_line.h"

typedef struct		s_env
{
	va_list			arg;
	int				i;
	int				result;
}					t_env;

void				print_char(t_env *m);
void				check_specifier(const char *fmt, t_env *m);
int					ft_printf(const char *fmt, ...);
#endif
