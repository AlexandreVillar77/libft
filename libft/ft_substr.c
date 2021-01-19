/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:28:33 by avillar           #+#    #+#             */
/*   Updated: 2021/01/07 12:01:50 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*rtn;
	size_t		i;

	i = 0;
	if (s == 0)
		return (0);
	if (!(rtn = malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len && (int)start <= ft_strlen((char *)s))
	{
		rtn[i] = s[start];
		i++;
		start++;
	}
	rtn[i] = 0;
	return (rtn);
}
