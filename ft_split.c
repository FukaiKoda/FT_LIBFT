/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <habdella@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:07:36 by habdella          #+#    #+#             */
/*   Updated: 2024/10/27 17:32:33 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		flag = 1;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (flag)
				count++;
			flag = 0;
			i++;
		}
	}
	return (count);
}

static int	ft_len(const char *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_strduplen(const char *s, char c)
{
	char	*p;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[len] = '\0';
	return (p);
}

static void	ft_free(char **p, int count)
{
	while (count--)
		free(p[count]);
	free(p);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**p;

	if (!s)
		return (NULL);
	p = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!p)
		return (NULL);
	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			p[count] = ft_strduplen(s, c);
			if (!p[count++])
				return (ft_free(p, count - 1), NULL);
			s += ft_len(s, c, 0);
		}
	}
	p[count] = NULL;
	return (p);
}
