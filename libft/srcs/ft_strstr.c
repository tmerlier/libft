/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:48:00 by tmerlier          #+#    #+#             */
/*   Updated: 2013/12/29 18:43:37 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char const *str1, const char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str2[j] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[j])
		{
			while (str1[i + j] == str2[j] && str2[j] != '\0')
				j++;
			if (str2[j] == '\0')
				return ((char *)str1 + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
