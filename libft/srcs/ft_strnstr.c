/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:42:25 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:16:11 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*str2 == '\0')
		return ((char *)str1);
	while (i < n && *(str1 + i))
	{
		while (*(str1 + i + j) == *(str2 + j) && i + j < n)
		{
			if (*(str2 + j + 1) == 0)
				return ((char *)(str1 + i));
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
