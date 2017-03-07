/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:06:00 by apineda           #+#    #+#             */
/*   Updated: 2016/10/29 16:20:40 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s2[i] != '\0' || s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			a = s2[i];
			b = s1[i];
			return (b - a);
		}
		else
			i++;
	}
	return (0);
}
