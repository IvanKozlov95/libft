/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:26:35 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 20:56:01 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	new->next = *alst;
	*alst = new;
}