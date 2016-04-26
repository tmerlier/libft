/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:52:54 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/22 20:48:30 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if ((size_t)(s1 - s2) < (n + 1))
		return (s1);
	while (s1[i] != '\0')
		i++;
	while (n != 0)
	{
		if (s2[j] == '\0')
			n = 0;
		else
		{
			s1[i] = s2[j];
			i++;
			j++;
			n--;
		}
	}
	s1[i] = '\0';
	return (s1);
}
