/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cell_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 05:08:07 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 07:33:02 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_del_line(char ***table, char *name)
{
	int		i;
	char	*str;

	i = -1;
	str = ft_strnew(ft_count_character_in_table(*table));
	while ((*table)[++i])
	{
		if (!ft_strcmp((*table)[i], name))
			continue;
		ft_strcat(str, (*table)[i]);
		ft_strcat(str, "\n");
	}
	ft_clr_table(*table);
	*table = ft_creat_table(str, '\n');
	ft_memdel((void *)&str);
}

void			ft_cell_del(char ***table, char *value)
{

	if (!table || !*table || !value || !ft_strlen(value))
	{
		ft_putendl("ft_cell_del: table == NULL || name == NULL");
		return ;
	}
	ft_del_line(table, value);
}
