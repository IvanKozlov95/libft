/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 10:16:33 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/09 21:17:56 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include <stddef.h>

char	*ft_strstredl(char *haystack, char *needle);
int		ft_strchri(char *s, char c);
char	*ft_strnewc(size_t size, char c);

#endif
