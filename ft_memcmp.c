/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:20:28 by epillot           #+#    #+#             */
/*   Updated: 2016/12/02 12:36:04 by epillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;

	i = 1;
	if (!n)
		return (0);
	while (i < n && *(t_byte*)s1 == *(t_byte*)s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (*((const t_byte*)s1) - *((const t_byte*)s2));
}
