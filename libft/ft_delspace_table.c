/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delspace_table.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 02:15:44 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 04:58:17 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_error_buff()
{
	ft_putendl("ft_error_buff: Problem size > 100000");
	ft_putendl("Not traitement cell !");
}

static int		ft_stockk(char *dst, char *src)
{
	int		i;
	int		j;
	int		size;

	i = -1;
	j = -1;
	size = ft_strlen(src);
	while (src[++i] && ft_issspace(src[i]))
			;
	while (ft_issspace(src[--size]) && size > 0)
		src[size] = '\0';
	if (ft_strlen(&src[i]) > 100000)
		return (-1);
	while (src[i])
		dst[++j] = src[i++];
	dst[++j] = '\0';
	return (ft_strlen(dst));
}

void			ft_delspace_table(char ***table)
{
	int		i;
	int		s_ret;
	char	*tmp;
	char	tmpp[100000];

	if (!table)
		ft_putendl("ft_delspace_table: *table == NULL");
	else
	{
		i = -1;
		while ((*table)[++i])
		{
			if ((s_ret = ft_stockk(tmpp, (*table)[i])) == -1)
				return (ft_error_buff());
			else if (s_ret == 0)
			{
				// Suppr link
				continue ;
			}
			(s_ret) ? ft_memset((*table)[i], '\0', ft_strlen((*table)[i])) : 0;
			ft_memcpy((*table)[i], tmpp, s_ret);
		}
	}
}
