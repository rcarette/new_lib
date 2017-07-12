/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_n_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 08:30:47 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 09:50:16 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_line(char **table, const char *name, int x)
{
	int		i;
	char	*cpy;
	int		size;

	if (!table || !name || !ft_strlen(name))
	{
		ft_putendl("ft_get_line: table || name == NULL");
		ft_putendl("function ft_get_line: return NULL");
		return (NULL);
	}
	i = -1;
	size = ft_strlen(name);
	while (table[++i])
		if (!ft_strncmp(table[i], name, size))
		{
			cpy = ft_strdup(&table[i][size + 1]);
			return (cpy);
		}
	return (NULL);
}
