/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:36:28 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/07 18:08:51 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main()
// {
// 	int nb;
// 	char *p;
// 	//-300
// 	p = &nb;
// 	ft_memset(&nb,0b11111111,4);
// 	ft_memset((char *)&nb + 1,0b11111110,1);
// 	//ft_memset(&nb,0b00100100,1);
// 	printf("%d",nb);
// }

// int	main()
// {
// 	int	nb;
// 	char *p;

// 	p = (char *)&nb;
// 	ft_memset(&nb,0b11111111, 4);
// 	ft_memset(p++,0b00000101, 1);
// 	ft_memset(p, 0b00111001,1);
// 	printf("%d",nb);
// }