/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 01:10:16 by vmercadi          #+#    #+#             */
/*   Updated: 2016/12/05 19:29:41 by vmercadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Trouve la premiere occurence de c dans la chaine.
*/

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		n;
	char	c2;
	char	*s;

	s = (char *)str;
	c2 = c;
	i = 0;
	n = ft_strlen(str);
	while (i < n + 1)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
