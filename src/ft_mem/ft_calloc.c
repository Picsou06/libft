/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:21:17 by evdalmas          #+#    #+#             */
/*   Updated: 2024/11/08 11:25:40 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int elementCount, int elementSize)
{
	void	*ptr;
	int		i;

	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < elementCount * elementSize)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
