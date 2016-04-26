/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:30:28 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/22 20:48:27 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (!(s1 == NULL || s2 == NULL))
	{
		i = 0;
		while (s1[i] == s2[i] && i < n)
		{
			if (s1[i] == '\0')
				return (1);
			i++;
		}
		if (i == n)
			return (1);
	}
	return (0);
}
