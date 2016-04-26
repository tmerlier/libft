/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/21 11:31:30 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/21 11:31:33 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_lstcount(t_list *list)
{
	int		len;
	t_list	*tmp;

	len = 0;
	if (list)
	{
		tmp = list;
		while (tmp)
		{
			len++;
			tmp = tmp->next;
		}
	}
	return (len);
}
