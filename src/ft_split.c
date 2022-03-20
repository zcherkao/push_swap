/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:24:12 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/11 16:27:26 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

static char	*ft_free(char **split, const char *start, size_t len)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
	{
		while ((*split)--)
			free (*split);
		free (split);
		return (0);
	}
	ft_strlcpy (copy, start, len + 1);
	return (copy);
}

size_t	ft_strlcpy(char *dest, const char *source, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (destsize > 0)
	{
		while (source[j] && j < destsize - 1)
		{
			dest[j] = source[j];
			j++;
		}
		dest[j] = '\0';
	}
	while (source[i])
		i++;
	return (i);
}

static size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*start;
	char		**split;
	size_t		len;

	i = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof (*split) * ft_count(s, c) + 1);
	if (!split)
		return (0);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		s--;
		while (*(++s) && *s != c)
			len++;
		if (*(s - 1) != c)
			split[i++] = ft_free(split, start, len);
	}
	split[i] = 0;
	return (split);
}
