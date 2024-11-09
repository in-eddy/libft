/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:28:57 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/07 21:07:21 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	i = 0;
	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s01[i] != '\0' && s02[i] != '\0' && i < n - 1)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (s01[i] - s02[i]);
}
