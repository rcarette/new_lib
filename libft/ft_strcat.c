/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 12:11:16 by rcarette          #+#    #+#             */
/*   Updated: 2017/07/04 01:24:52 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		len;
	int		i;

	if (!dest || !src)
		return (NULL);
	i = -1;
	len = -1;
	while (dest[++len])
		;
	while (src[++i])
		dest[len + i] = (src[i]);
	dest[len + i] = '\0';
	return (dest);
}
