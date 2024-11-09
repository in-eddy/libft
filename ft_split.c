/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:04:59 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/03 22:23:07 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countw(const char *str, char sep)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 0;
	while (str[i] != '\0')
	{
		check = 0;
		while (str[i] == sep)
			i++;
		while (str[i] && str[i] != sep)
		{
			if (check == 0)
			{
				count++;
				check = 1;
			}
			i++;
		}
	}
	return (count);
}

char	*rmp(const char *s, char sep, int *w )
{
	int		i;
	int		l;
	char	*d;
	int		j;

	l = 0;
	j = 0;
	while (s[*w] && s[*w] == sep)
		(*w)++;
	i = *w;
	while (s[*w] && s[*w] != sep)
		(*w)++;
	l = *w - i;
	d = (char *)malloc(l + 1);
	if (!d)
		return (NULL);
	while (s[i + j] && s[i + j] != sep)
	{
		d[j] = s[i + j];
		j++;
	}
	d[j] = '\0';
	return (d);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		word;
	int		id;

	word = countw(s, c);
	i = 0;
	id = 0;
	p = (char **)malloc((word + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (i < word)
	{
		p[i] = rmp(s, c, &id);
		i++;
	}
	p[i] = NULL;
	return (p);
}
