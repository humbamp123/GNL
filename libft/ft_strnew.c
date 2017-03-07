/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 11:33:51 by apineda           #+#    #+#             */
/*   Updated: 2016/10/24 14:13:51 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = size;
	str = malloc(size + 1);
	if (size && str)
	{
		while (i <= k)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
