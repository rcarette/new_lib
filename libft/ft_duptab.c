/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duptab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 05:17:17 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 06:41:09 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_duptab(char **table)
{
	char	*str;
	char	*tmp;
	int		i;

	i = -1;
	str = NULL;
	if (!table || !*table)
	{
		ft_putendl("ft_duptab: table == NULL || table[0] == NULL");
		ft_putendl("ft_duptab: return NULL");
		return (NULL);
	}
	str = ft_strnew(ft_count_character_in_table(table));
	ft_memset(str, '\0', ft_count_character_in_table(table));
	while (table[++i])
	{
		ft_strcat(str, table[i]);
		ft_strcat(str, "\n");
	}
	return (str);
}
