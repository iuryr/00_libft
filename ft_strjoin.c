/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:42:15 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/15 14:02:04 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	joined_size;
	char	*joined_str;

	joined_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = malloc(joined_size);
	if (joined_str == NULL)
		return (NULL);
	ft_strlcpy(joined_str, s1, joined_size);
	ft_strlcat(joined_str, s2, joined_size);
	return (joined_str);
}
