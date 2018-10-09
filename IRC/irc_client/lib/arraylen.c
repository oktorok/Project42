/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 06:39:19 by angonyam          #+#    #+#             */
/*   Updated: 2018/08/30 06:39:20 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		arraylen(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}