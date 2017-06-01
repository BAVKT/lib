/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cp_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercadi <vmercadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:11:32 by vmercadi          #+#    #+#             */
/*   Updated: 2017/06/01 17:09:10 by vmercadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Pour copier un tableau dans un autre
*/

char	**ft_cp_tab(char **tab, char **dst, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			dst[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
	return (dst);
}
