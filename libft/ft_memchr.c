/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 19:06:32 by apineda           #+#    #+#             */
/*   Updated: 2016/10/08 14:38:43 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t len)
{
	int				i;
	int				j;
	unsigned char	*source;

	i = 0;
	j = len;
	source = (unsigned char *)s;
	while (i < j)
	{
		if (*source == (unsigned char)c)
			return (source);
		source++;
		i++;
	}
	return (NULL);
}
