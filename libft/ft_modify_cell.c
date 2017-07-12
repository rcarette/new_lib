/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modify_cell.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 07:33:23 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 09:31:26 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_modify_cell(char ***table, char *name_value, char *value)
{
	char	*str;
	int		i;

	i = -1;
	if (!table || !*table || !name_value || !ft_strlen(name_value))
	{
		ft_putendl("ft_modify_cell: table || name_value || value == NULL");
		return ;
	}
	str = ft_strnew(ft_count_character_in_table(*table) + ft_strlen(value));
	while ((*table)[++i])
	{
		if (!ft_strncmp((*table)[i], name_value, ft_strlen(name_value)))
		{
			ft_strcat(str, value);
			ft_strcat(str, "\n");
		}
		else
		{
			ft_strcat(str, (*table)[i]);
			ft_strcat(str, "\n");
		}
	}
	ft_clr_table(*table);
	*table = ft_creat_table(str, '\n');
	ft_memdel((void *)&str);
}
