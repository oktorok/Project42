/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 17:30:11 by angonyam          #+#    #+#             */
/*   Updated: 2018/06/22 17:30:37 by angonyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			number_length(int number)
{
	int		size;

	size = 0;
	while (number > 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}