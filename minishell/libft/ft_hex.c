/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsferopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:17:40 by gsferopo          #+#    #+#             */
/*   Updated: 2017/09/04 11:22:39 by gsferopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_hex(int n)
{
	char	*tab;
	char	*s;
	int		i;
	int		len;

	tab = "0123456789ABCDEF";
	len = ft_numblen(n, 16);
	s = (char *)malloc(len + 1);
	i = 0;
	while (n != 0)
	{
		s[i] += tab[n % 16];
		n /= 16;
		i++;
	}
	return (s);
}
