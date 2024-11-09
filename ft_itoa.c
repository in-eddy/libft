/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:23:26 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/07 17:19:35 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(int c)
{
	size_t	i;

	i = 0;
	if (c <= 0)
		i++;
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

static char	*tostring(char *p, long nb, size_t size)
{
	size_t	i;

	i = size - 1;
	p[size] = '\0';
	while (nb > 0)
	{
		p[i] = nb % 10 + 48;
		nb = nb / 10 ;
		i--;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	size_t	j;
	char	*p;
	long	nb;

	nb = (long)n;
	j = count(nb);
	p = malloc(j + 1);
	if (!p)
		return (NULL);
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
		p = tostring(p, nb, j);
	}
	else if (nb == 0)
	{
		p[0] = '0';
		p[1] = '\0';
	}
	else
		p = tostring(p, nb, j);
	return (p);
}
