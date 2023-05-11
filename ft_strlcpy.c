/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:29:45 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/11 08:37:01 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	counter;

	src_size = ft_strlen(src);
	counter = 0;
	while (src[counter] != '\0' && counter < size - 1)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[size - 1] = '\0';
	return (src_size);
}
