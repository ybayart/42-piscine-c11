/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:50:22 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/22 11:16:43 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int		i;
	int		n;

	i = -1;
	n = 0;
	while (++i < lenght)
		if ((*f)(tab[i]) != 0)
			n++;
	return (n);
}
