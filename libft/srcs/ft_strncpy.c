/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:33:01 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/22 20:48:28 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (n != 0)
	{
		dest[i] = src[j];
		i++;
		if (src[j] != '\0')
			j++;
		n--;
	}
	return (dest);
}
