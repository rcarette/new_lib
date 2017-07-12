/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clr_table.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 01:24:57 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 01:54:39 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clr_table(char **table)
{
	int		i;

	if (table)
	{
		i = -1;
		while (table[++i])
			ft_memdel((void *)&table[i]);
		free(table);
	}
	else
		ft_putendl("ft_clr_table: table == NULL");
}
