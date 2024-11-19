/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:05:17 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/18 23:02:58 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;
	size_t	t;

	t = num * size;
	if (size != 0 && t / size != num)
		return (NULL);
	p = malloc(t);
	if (!p)
		return (NULL);
	ft_bzero(p, t);
	return (p);
}
