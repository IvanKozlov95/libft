/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:54:30 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 18:10:46 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	c;

	c = 0;
	i = 0;
	while (s1[i] && s2[i] && c < n)
	{
		if (s1[i] != s2[i])
			break ;
		c++;
		i++;
	}
	return (s1[i] - s2[i]);
}
