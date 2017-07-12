/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:24:50 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 09:50:42 by rcarette         ###   ########.fr       */
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
	str = ft_duptab(ev);
	table = ft_creat_table(str, '\n');
	ft_print_table(table);
	ft_delspace_table(&table);
	ft_putendl("-------------");
	ft_cell_del(&table, "HOME=/Users/rcarette");
	ft_cell_del(&table, "TERM_SESSION_ID=w1t0p1:3CB2DDBB-496C-4551-B07D-F64430EC985E");
	ft_modify_cell(&table, "USER","       USER=Hello");
	ft_cell_del(&table, "COLORFGBG=7;0");
	ft_print_table(table);
	ft_putendl("---------------");
	char *tmp = ft_get_line(table, "OLDPWD", '=');
	ft_putendl(tmp);
	ft_memdel((void *)&tmp);
	ft_clr_table(table);
	ft_memdel((void *)&str);
	return 0;
}
