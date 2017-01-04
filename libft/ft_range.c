/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 03:09:45 by vmercadi          #+#    #+#             */
/*   Updated: 2016/11/10 04:54:56 by vmercadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int lenght;

	i = 0;
	lenght = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc(sizeof(*tab) * lenght);
	while (i < lenght)
	{
		tab[i] = min;
		min += 1;
		i++;
	}
	return (tab);
}
