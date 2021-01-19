/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:03:25 by avillar           #+#    #+#             */
/*   Updated: 2021/01/06 11:15:45 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	cr;

	cr = c;
	i = 0;
	while (n > 0 && *(char*)s != cr)
	{
		s++;
		n -= sizeof(char);
	}
	if (n > 0)
		return ((void*)s);
	else
		return (0);
}
