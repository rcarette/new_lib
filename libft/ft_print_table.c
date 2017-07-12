/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 02:03:55 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 02:06:00 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_table(char **table)
{
	int		i;

	i = -1;
	if (table)
	{
		while (table[++i])
			ft_putendl(table[i]);
	}
	else
		ft_putendl("ft_print_table: table = NULL");
}
