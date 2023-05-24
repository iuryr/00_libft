/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:42:12 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/23 15:47:26 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	size;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	size = nelem * elsize;
	if (size / nelem != elsize)
		return (NULL);
	ptr = malloc(size);
	ft_bzero(ptr, size);
	return (ptr);
}
