/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:45:09 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/22 11:16:27 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = -1;
	while (tab[++i] != 0)
		if ((*f)(tab[i]) != 0)
			return (1);
	return (0);
}
