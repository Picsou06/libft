/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:23 by evdalmas          #+#    #+#             */
/*   Updated: 2024/11/04 17:55:45 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = pointer;
	val = (unsigned char) value;
	i = 0;
	while (i < count)
	{
		p[i++] = val;
	}
	return (pointer);
}
