/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:43:34 by apineda           #+#    #+#             */
/*   Updated: 2016/10/25 20:13:12 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(const char *ar, int k)
{
	if ((ar[k]) == ' ')
		return (1);
	if ((ar[k]) == '\t')
		return (1);
	if ((ar[k]) == '\n')
		return (1);
	if ((ar[k]) == '\v')
		return (1);
	if ((ar[k]) == '\f')
		return (1);
	if ((ar[k]) == '\r')
		return (1);
	else
		return (0);
}

static int		ft_morecheck(const char *ray, int m)
{
	if ((ray[m]) == '-' || (ray[m]) == '+')
	{
		m++;
		if (!(((ray[m]) >= '0') && ((ray[m]) <= '9')))
			return (0);
	}
	return (m);
}

int				ft_atoi(const char *str)
{
	int		a;
	int		i;
	int		j;

	i = 0;
	a = 0;
	j = 1;
	while (ft_check(str, i) == 1)
		i++;
	i = ft_morecheck(str, i);
	while ((str[i]) != '\0')
	{
		if ((str[i - 1]) == '-')
			j = -1;
		if (((str[i]) >= '0') && ((str[i]) <= '9'))
			a = a * 10 + str[i++] - '0';
		else
			return (j * a);
	}
	return (j * a);
}
