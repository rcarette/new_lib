/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_cell_in_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 00:57:09 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 02:03:30 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_error(char **table, const char *new_cell)
{
	if (!table)
	{
		ft_putendl("ft_add_cell_in_table: table == NULL");
		return (0);
	}
	else if (!new_cell || !ft_strlen(new_cell))
	{
		ft_putendl("ft_add_cell_in_table: new_cell == NULL");
		return (0);
	}
	return (1);
}

void	ft_add_cell_in_table(char ***table, const char *new_cell)
{
	int		i;
	char	*tmp;
	char	**new_table;

	i = -1;
	if (!ft_error(*table, new_cell))
		return ;
	tmp = ft_strnew(ft_count_character_in_table(*table) \
													+ ft_strlen(new_cell) + 1);
	while ((*table)[++i])
	{
		ft_strcat(tmp, (*table)[i]);
		ft_strcat(tmp, "\n");
	}
	ft_strcat(tmp, new_cell);
	ft_strcat(tmp, "\n");
	ft_clr_table(*table);
	*table = ft_creat_table(tmp, '\n');
	ft_memdel((void *)&tmp);
}
