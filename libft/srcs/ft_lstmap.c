/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 12:23:03 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:05:42 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;

	temp = lst;
	while (temp->next != NULL)
		f(temp->next);
	free(lst);
	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	return (lst);
}
