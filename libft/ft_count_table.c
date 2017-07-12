/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:32:16 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 08:44:00 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_character_in_table(char **table)
{
	int		i;
	int		size;

	if (!table)
	{
		ft_putendl("ft_count_table: table == NULL");
		ft_putendl("ft_count_table: return 0");
		return (0);
	}
	i = -1;
	size = 0;
	while (table[++i])
		size += (ft_strlen(table[i]));
	return (size + ft_strlen_table(table));
}
