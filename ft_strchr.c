/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:01:34 by gsaiago           #+#    #+#             */
/*   Updated: 2022/07/02 00:20:35 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		len;
	int		i;

	i = 0;
	len = 1 + ft_strlen(s);
	ch = ((char) c);
	while (i < len)
	{
		if (*s == ch)
			return ((char *) s);
		s++;
		i++;
	}
	return (NULL);
}
