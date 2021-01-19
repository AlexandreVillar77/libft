/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:05:25 by avillar           #+#    #+#             */
/*   Updated: 2021/01/06 14:06:25 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *restrict dst,
		const char *restrict src, size_t dstsize)
{
	int		i;

	i = 0;
	if (!(src))
		return (0);
	if (dstsize > 0)
	{
		while (((char *)src)[i] && (i < ((int)dstsize - 1)))
		{
			dst[i] = ((char *)src)[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen((char *)src));
}
