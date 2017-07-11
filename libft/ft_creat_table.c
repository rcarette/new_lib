/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 04:05:30 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/11 05:44:12 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_line(char *str, int c)
{
	int		size;

	size = 0;
	while (*str)
	{
		(*str != c) ? ++size : 0;
		while (*str != c)
			++str;
		(*str == c) ? ++str : 0;
	}
	return (size);
}

static int		*ft_cell(char *str, int x, int line)
{
	int		*table_cell;
	int		size;
	int		i;

	i = -1;
	if (!(table_cell = (int *)malloc(sizeof(int) * line)))
		exit(EXIT_FAILURE);
	while (*str)
	{
		if (*str != x)
		{
			size = 0;
			while (*str != x)
			{
				++size;
				++str;
			}
			table_cell[++i] = size;
		}
		else
			++str;
	}
	return (table_cell);
}

static char		**ft_apply(int *cell, int line, char *str, int x)
{
	char	**table;
	int		i[3];

	i[0] = -1;
	i[1] = -1;
	if (!(table = (char **)malloc(sizeof(char *) * line)))
		return (NULL);
	while (*str)
	{
		if (*str != x)
		{
			i[2] = -1;
			if (!(table[++i[0]] = (char *)malloc(sizeof(char) * \
														(cell[++i[1]] + 1))))
				return (table);
			while (*str != x)
				table[i[0]][++i[2]] = *str++;
			table[i[1]][++i[2]] = '\0';
		}
		else
			++str;
	}
	table[++i[0]] = NULL;
	return (table);
}

char			**ft_creat_table(char *str, int x)
{
	int		line;
	int		*cell;
	char	**table;

	line = 1;
	if (!str || !ft_strlen(str))
	{
		ft_putendl("ft_creat_table: var str == NULL || str == \"\"");
		return (NULL);
	}
	if (!(line += ft_count_line(str, x)))
		return (NULL);
	cell = ft_cell(str, x, line);
	table = ft_apply(cell, line, str, x);
	free(cell);
	return (table);

}
