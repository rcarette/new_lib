/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 12:11:16 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/12 00:54:07 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		len;
	int		i;

	i = -1;
	len = -1;
	if (!dest || !src)
		return (NULL);
	while (dest[++i])
		;
	while (src[++len])
		dest[i + len] = src[len];
	return (dest);
}
