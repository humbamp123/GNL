/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 15:19:23 by apineda           #+#    #+#             */
/*   Updated: 2016/10/07 16:33:08 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*source;

	i = 0;
	source = (char *)s;
	while (source[i] != '\0')
	{
		if (source[i] == c)
			return (&source[i]);
		i++;
	}
	if (c == '\0')
		return (&source[i]);
	return (NULL);
}
