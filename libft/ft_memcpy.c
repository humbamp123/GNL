/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:40:33 by apineda           #+#    #+#             */
/*   Updated: 2016/10/01 16:20:25 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*cpy;
	char	*test;
	int		j;

	j = n;
	test = (char *)dst;
	cpy = (char *)src;
	i = 0;
	while (i < j)
	{
		test[i] = cpy[i];
		i++;
	}
	return (test);
}
