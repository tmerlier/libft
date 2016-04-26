/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:35:26 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/22 20:48:25 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen((char *)s);
	if ((char)c == 0)
		return ((char *)s + len);
	while (i < len)
	{
		if (s[len - i] == (char)c)
			return ((char *)(s + (len - i)));
		i++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
