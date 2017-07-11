/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 19:43:51 by rcarette          #+#    #+#             */
/*   Updated: 2017/06/09 07:03:46 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size, size_t type)
{
	void	*new_memory;

	new_memory = NULL;
	if (size)
		if (!(new_memory = (void *)malloc(sizeof(type) * size)))
		{
			write(1, "Error Malloc !\n", 15);
			exit(EXIT_FAILURE);
		}
	(type == 1 && new_memory != NULL) ? ft_memset(new_memory, '\0', size) : 0;
	return (new_memory);
}
