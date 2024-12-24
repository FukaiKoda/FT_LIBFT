/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <habdella@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:55:13 by habdella          #+#    #+#             */
/*   Updated: 2024/10/26 08:49:20 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	helper(long nb, char *p)
{
	int		i;
	int		j;
	char	arr[11];

	i = 0;
	j = 0;
	if (nb == 0)
		p[j++] = '0';
	if (nb < 0)
	{
		p[j++] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		arr[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	while (i >= 0)
		p[j++] = arr[--i];
	p[--j] = '\0';
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*itoa;
	int		size;

	nb = n;
	size = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		size++;
		n /= 10;
	}
	itoa = malloc(size + 2);
	if (!itoa)
		return (NULL);
	helper(nb, itoa);
	return (itoa);
}
