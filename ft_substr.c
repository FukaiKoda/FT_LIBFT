/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <habdella@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:56:39 by habdella          #+#    #+#             */
/*   Updated: 2024/10/26 09:41:49 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*p;
	unsigned int	slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
	{
		p = malloc(1);
		if (p)
			*p = '\0';
		return (p);
	}
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len && s[start])
	{
		p[i] = s[start++];
		i++;
	}
	p[i] = '\0';
	return (p);
}
