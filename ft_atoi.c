/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:20:17 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/01 18:53:30 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int sign)
{
	if (sign == -1)
		return (0);
	else
		return (-1);
}

static int	ato(const char *str, long nb, int sign)
{
	int		i;
	long	temp;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = nb;
		nb = (nb * 10) + (str[i] - 48);
		if (temp != nb / 10)
			return (check(sign));
		i++;
	}
	return (nb * sign);
}

int	ft_atoi(const char *str)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	return (ato(str, nb, sign));
}
