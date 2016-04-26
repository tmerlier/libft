/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 19:23:01 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:18:12 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

size_t			ft_wordcount(const char *s, char c)
{
	size_t		n;
	size_t		i;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			n++;
		while (s[i] != c && s[i])
			i++;
	}
	return (n);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t		itab;
	size_t		i;
	char		**tab;
	char		*word;

	if (s == NULL)
		return (NULL);
	tab = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	i = 0;
	itab = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		word = ft_strcdup(s + i, c);
		i += ft_strlen(word);
		if (s[i] == 0 && itab == 0 && word[0] == 0)
			tab[0] = 0;
		else if (word[0] != 0)
			tab[itab++] = ft_strdup(word);
		free(word);
	}
	tab[itab] = 0;
	return (tab);
}
