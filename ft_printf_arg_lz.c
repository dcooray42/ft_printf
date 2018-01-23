/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg_lz.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcooray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 18:15:27 by dcooray           #+#    #+#             */
/*   Updated: 2017/03/13 18:15:28 by dcooray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_arg_lz(char *format, int *i, t_var *var)
{
	int	j;

	if (*format == 'Z')
	{
		if (var->champ > 1 && var->champ_neg == 0)
		{
			j = var->champ - 1;
			*i += j;
			while (j--)
				ft_putchar(' ');
			ft_putchar('Z');
		}
		if (var->champ > 1 && var->champ_neg == 1)
		{
			j = var->champ - 1;
			*i += j;
			ft_putchar('Z');
			while (j--)
				ft_putchar(' ');
		}
		else
			ft_putchar('Z');
		*i += 1;
		var->f = 1;
	}
}
