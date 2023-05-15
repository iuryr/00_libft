/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:22:19 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/15 11:50:59 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*cpy_from;

	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	cpy_from = (char *)&s[start];
	ft_strlcpy(substr, cpy_from, len + 1);
	return (substr);
}
