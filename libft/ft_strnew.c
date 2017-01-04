/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmercadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 00:37:57 by vmercadi          #+#    #+#             */
/*   Updated: 2016/12/04 21:42:09 by vmercadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** p1 = La taille à allouer
** Alloue et retourne une chaine de caractère “fraiche” terminée par un ’\0’. \
** Chaque caractère de la chaine est initialisé à ’\0’. NULL si fail.
*/

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
