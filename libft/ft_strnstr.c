/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:48:06 by avillar           #+#    #+#             */
/*   Updated: 2021/01/06 15:23:12 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		seek;

	i = 0;
	seek = 0;
	if (len == 0)
		return ((char *)haystack);
	while (len >= 0 && ((char *)haystack)[i])
	{
		while (((char *)haystack)[(i + seek)] == ((char *)needle)[seek]
				&& ((char *)haystack)[i + seek])
			seek++;
		if (seek == ft_strlen((char *)needle) && i + seek <= (int)len)
			return (((char *)haystack) + i);
		seek = 0;
		i++;
		len--;
	}
	return (0);
}
