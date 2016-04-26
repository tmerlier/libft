/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 19:25:50 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:18:56 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*first;
	char	*last;

	str = (char *)s;
	if (!s)
		return (NULL);
	else if (*str == '\0')
		return (ft_strdup(""));
	while (ft_isspace(*str))
		str++;
	if (*str == '\0')
		return (ft_strdup(""));
	first = str;
	last = first;
	while (*str != '\0')
	{
		if (!(ft_isspace(*str)))
			last = str;
		str++;
	}
	if (first != last)
		return (ft_strsub(first, 0, (last - first + 1)));
	else
		return (ft_strdup((char *)s));
}
