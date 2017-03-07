/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:18:06 by apineda           #+#    #+#             */
/*   Updated: 2016/10/01 16:20:15 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				j;
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	j = n;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < j)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		i++;
		str1++;
		str2++;
	}
	return (0);
}
