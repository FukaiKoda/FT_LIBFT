/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <habdella@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:14:31 by habdella          #+#    #+#             */
/*   Updated: 2024/10/26 08:56:29 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*udest;
	const unsigned char	*usrc;

	udest = dest;
	usrc = src;
	if (udest == usrc || n == 0)
		return (dest);
	if (udest > usrc && udest <= usrc + n)
	{
		i = n;
		while (i--)
			udest[i] = usrc[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
