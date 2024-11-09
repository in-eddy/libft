/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:43:54 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/07 21:34:59 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int c, const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	k;
	char	*d;

	i = 0;
	j = ft_strlen(s1);
	k = 0;
	if (!set)
		return ((char *)s1);
	while (s1[i] != '\0' && check(s1[i], set) == 0)
		i++;
	while (j > 0 && check(s1[j - 1], set) == 0)
		j--;
	len = j - i;
	if (j < i)
		len = 0;
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	while (i < j)
		d[k++] = s1[i++];
	d[k] = '\0';
	return (d);
}
