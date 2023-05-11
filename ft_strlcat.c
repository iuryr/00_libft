/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:59:43 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/11 14:21:49 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	counter;

	counter = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		return (dst_len);
	while (src[counter] != '\0' && counter < size - dst_len - 1)
	{
			dst[dst_len + counter] = src[counter];
			counter++;
	}
	dst[dst_len + counter] = '\0';
	return (dst_len + src_len);
}
