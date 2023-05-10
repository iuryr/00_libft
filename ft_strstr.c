/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:16:28 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/10 10:12:22 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return ((char *)haystack);
	else
	{
		while (*haystack != '\0')
		{
			if (ft_strcmp(haystack, needle))
				haystack++;
			else
				return ((char *)haystack);
		}
		return (NULL);
	}
}			
