/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:24:20 by avillar           #+#    #+#             */
/*   Updated: 2021/01/06 15:48:26 by avillar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*rtn;
	size_t		i;

	i = 0;
	if (!(rtn = malloc(size * count)))
		return (0);
	((char *)rtn)[0] = 0;
	while (i <= count * size)
	{
		((char *)rtn)[i] = 0;
		i++;
	}
	return (rtn);
}
