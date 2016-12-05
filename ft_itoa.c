/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:46:58 by epillot           #+#    #+#             */
/*   Updated: 2016/12/02 15:40:29 by epillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		nb;
	int		i;
	char	*output;

	nb = n;
	size = 1;
	i = 0;
	if (n < 0)
		size++;
	while (nb < -9 || nb > 9)
	{
		size++;
		nb /= 10;
	}
	if (!(output = ft_strnew(size)))
		return (NULL);
	if (n < 0)
		output[i++] = '-';
	while (size - 1 >= i)
	{
		output[size-- - 1] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	return (output);
}
