/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <habdella@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:28:54 by habdella          #+#    #+#             */
/*   Updated: 2024/10/26 08:32:55 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*udest;
	const unsigned char	*usrc;

	i = 0;
	if (!src && !dest)
		return (NULL);
	udest = dest;
	usrc = src;
	while (i < n)
	{
		udest[i] = usrc[i];
		i++;
	}
	return (dest);
}
