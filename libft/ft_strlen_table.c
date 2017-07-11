/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 03:29:15 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/11 04:05:01 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_error_strlen_table(void)
{

	ft_putendl("ft_error_strlen_table: var table in strlen_table == NULL\n");
	return (0);
}

int				ft_strlen_table(char **table)
{
	int		ite;

	ite = 0;
	if (!table || !*table)
	{
		printf("NULL\n");
		return (0);
	}
	while (table[ite])
		++ite;
	return (ite);
}
