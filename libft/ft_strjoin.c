/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:52:23 by avillar           #+#    #+#             */
/*   Updated: 2021/01/07 12:01:37 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*rtn;
	size_t		s1s;
	size_t		s2s;

	if (s1 == 0 || s2 == 0)
		return (0);
	s1s = ft_strlen((char *)s1);
	s2s = ft_strlen((char *)s2);
	if (!(rtn = malloc(sizeof(char) * s1s + s2s + 1)))
		return (0);
	ft_strlcpy(rtn, s1, s1s + 1);
	ft_strlcat(rtn, s2, s1s + s2s + 1);
	return (rtn);
}
