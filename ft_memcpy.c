/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:00:41 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/07 21:34:29 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*s;

	i = 0;
	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}
