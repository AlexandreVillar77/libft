/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:38:49 by avillar           #+#    #+#             */
/*   Updated: 2021/01/06 15:47:07 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	int		i;

	i = 0;
	if (!(rtn = malloc(sizeof(char) * ft_strlen((char *)s1) + 1)))
		return (0);
	while (((char *)s1)[i])
	{
		rtn[i] = ((char *)s1)[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
