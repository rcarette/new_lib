/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:24:50 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 02:06:31 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, const char *argv[], char **ev)
{
	char	*str;
	char	**table;
	int		size;
	char	**new_tab;
	int		i;

	i = -1;
	size = 0;
	str = ft_strnew(ft_count_character_in_table(ev) + 1);
	while (ev[++i])
	{
		ft_strcat(str, ev[i]);
		ft_strcat(str, "\n");
	}
	table = ft_creat_table(str, '\n');
	i = -1;
	ft_add_cell_in_table(&table, "Romain=toto");
	ft_add_cell_in_table(&table, "Carette=toto");
	ft_add_cell_in_table(&table, "Hello=coco");
	ft_memdel((void *)&str);
	ft_clr_table(table);
	ft_print_table(NULL);
	return 0;
}
