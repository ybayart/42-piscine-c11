/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:14:33 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/22 01:00:05 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*res;

	res = malloc(sizeof(int) * lenght);
	i = -1;
	while (++i < lenght)
		res[i] = (*f)(tab[i]);
	return (res);
}
