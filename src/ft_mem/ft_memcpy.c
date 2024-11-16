/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:16 by evdalmas          #+#    #+#             */
/*   Updated: 2024/11/09 15:56:03 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned long		i;

	if (!destination && !source && size)
		return (NULL);
	d = (unsigned char *) destination;
	s = (const unsigned char *) source;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}