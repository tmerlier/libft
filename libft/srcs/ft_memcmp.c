/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:23:54 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/22 20:48:44 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1 && s2)
	{
		if (*((char *)s1 + i) != *((char *)s2 + i))
			return ((*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i)));
		i++;
	}
	return (0);
}
