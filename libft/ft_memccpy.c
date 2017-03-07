/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:30:49 by apineda           #+#    #+#             */
/*   Updated: 2016/10/01 16:19:51 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	int				j;
	char			*destin;
	char			*source;

	destin = dest;
	source = (char *)src;
	i = 0;
	j = n;
	while (i < j)
	{
		destin[i] = source[i];
		if (source[i] == c)
		{
			i++;
			return (&destin[i]);
		}
		i++;
	}
	return (0);
}
