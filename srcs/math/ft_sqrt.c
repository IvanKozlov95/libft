/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:19:58 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/20 15:20:03 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 1;
	sq = 1;
	if(nb == 0)
		return(0);
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
		return (i);
	else
		return(0);
}
