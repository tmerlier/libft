/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:12:40 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:07:26 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void		*ft_memalloc(size_t size)
{
	void	*str;

	str = (void *)malloc(size * sizeof(*str));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
