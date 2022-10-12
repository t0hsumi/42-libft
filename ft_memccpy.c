/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:09:56 by tohsumi           #+#    #+#             */
/*   Updated: 2022/10/12 20:27:45 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*usdst;
	unsigned char	*ussrc;
	size_t			i;

	usdst = (unsigned char *)dst;
	ussrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		usdst[i] = ussrc[i];
		if (usdst[i++] == (unsigned char)c)
			return ((char *)usdst + i);
	}
	return (NULL);
}
