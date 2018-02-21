/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:08:12 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 16:22:53 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t		ft_count_digits(int value)
{
	size_t	count;

	count = value == 0;
	while (value)
	{
		count++;
		value /= 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	size_t	d_count;
	char	*head;
	char	*s;

	d_count = ft_count_digits(n);
	if (!(s = (char *)malloc((n < 0) + d_count + 1)))
		return (NULL);
	if (n == 0)
		return ("0");
	head = s;
	if (n < 0)
		*s++ = '-';
	while (n)
	{
		*s++ = ABS(n % 10) + '0';
		n /= 10;
	} 
	*s = '\0';
	ft_strrev(*head == '-' ? head + 1 : head);
	return (head);
}