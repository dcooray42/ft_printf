/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_mod_bis.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcooray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 18:11:50 by dcooray           #+#    #+#             */
/*   Updated: 2017/03/13 21:23:17 by dcooray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_arg_mod_valid_ter(char **format, int j, t_tab *tab)
{
	t_var	*var;
	int		i;
	char	*tmp;

	var = tab->var;
	i = 0;
	tmp = *format;
	while (i < j && *tmp)
	{
		ft_printf_flag(&tmp, var);
		ft_printf_champ(&tmp, var);
		ft_printf_precision_bis(&tmp, var, &i);
		ft_printf_specifier_bis(&tmp, var, &i);
		ft_printf_flag(&tmp, var);
		tmp++;
	}
}

void	ft_printf_flag_bis(char **format, t_var *var)
{
	if (**format == '#' || **format == '0' || **format == ' ' ||
			ft_printf_flag_minus_plus(*format))
	{
		if (**format == '#')
			var->flag_hash = 1;
		if (**format == '0' && *(*format - 1) != '-' &&
				!ft_isdigit(*(*format - 1)))
			var->flag_zero = 1;
		if (**format == '+')
		{
			if (var->flag_minus)
				var->flag_minus = 0;
			var->flag_plus = 1;
		}
		if (**format == '-')
		{
			if (var->flag_plus)
				var->flag_plus = 0;
			var->flag_minus = 1;
		}
		if (**format == ' ')
			var->flag_space = 1;
	}
}

void	ft_printf_precision_bis(char **format, t_var *var, int *i)
{
	if (**format == '.')
	{
		var->flag_precision = 1;
		(*format)++;
		(*i)++;
		var->precision = ft_atoi(*format);
		while (ft_isdigit(**format))
		{
			(*format)++;
			(*i)++;
		}
		ft_printf_flag(format, var);
	}
}
