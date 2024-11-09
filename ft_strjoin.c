/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:43:04 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/01 18:06:37 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*d;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return ((char *) s2);
	if (s2 == NULL && s1 != NULL)
		return ((char *) s1);
	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!d)
		return (NULL);
	while (s1 && i < ft_strlen(s1))
		d[j++] = s1[i++];
	i = 0;
	while (s2 && i < ft_strlen(s2))
		d[j++] = s2[i++];
	d[j] = '\0';
	return (d);
}
