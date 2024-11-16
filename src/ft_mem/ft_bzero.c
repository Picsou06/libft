/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:16 by evdalmas          #+#    #+#             */
/*   Updated: 2024/11/04 17:37:57 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *pointer, unsigned long count)
{
	unsigned char	*p;
	unsigned long	i;

	p = pointer;
	i = 0;
	while (i < count)
		p[i++] = 0;
	return (pointer);
}
