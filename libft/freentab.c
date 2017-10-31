/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freentab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercadi <vmercadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:11:00 by vmercadi          #+#    #+#             */
/*   Updated: 2017/10/25 17:18:35 by vmercadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freentab(void **tab, int n)
{
	void	**tmp;

	if (n < 0 || !tab)
		return ;
	tmp = (void **)tab;
	while (n--)
	{
		if (tmp)
			ft_memdel(tmp);
		tmp++;
	}
	free(tab);
}
