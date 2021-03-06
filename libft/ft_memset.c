/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 16:42:18 by apineda           #+#    #+#             */
/*   Updated: 2016/09/28 21:20:09 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*cpy;
	int		j;

	j = len;
	cpy = b;
	i = 0;
	while (i < j)
	{
		cpy[i] = c;
		i++;
	}
	return (cpy);
}
