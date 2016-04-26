/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:46:15 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:08:04 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(n * sizeof(src));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = str[i];
		i++;
	}
	free(str);
	return (dest);
}
