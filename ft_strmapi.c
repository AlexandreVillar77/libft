/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <avillar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:05:04 by avillar           #+#    #+#             */
/*   Updated: 2021/01/07 15:32:37 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn;
	int		i;

	i = 0;
	if (s == 0)
		return (0);
	if (!(rtn = malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (0);
	while (s[i])
	{
		rtn[i] = (*f)(i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
