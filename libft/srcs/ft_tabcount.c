/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 21:11:20 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/19 21:12:58 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tabcount(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
