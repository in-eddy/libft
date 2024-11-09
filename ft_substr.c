/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:18:47 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/07 20:05:53 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	st;
	char	*d;

	i = 0;
	st = (size_t)start;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	while (st < start + len)
	{
		d[i++] = s[st++];
	}
	d[i] = '\0';
	return (d);
}
