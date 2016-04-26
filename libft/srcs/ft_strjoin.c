/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:22:57 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:12:57 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	if (!(s1 == NULL || s2 == NULL))
	{
		i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		dest = (char *)malloc((i + 1) * sizeof(*dest));
		j = 0;
		i = 0;
		while (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			dest[i] = s2[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
