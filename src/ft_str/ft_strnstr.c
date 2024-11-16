/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:04:03 by evdalmas          #+#    #+#             */
/*   Updated: 2024/11/08 10:15:52 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_match(char *str, char *to_find)
{
	while (*to_find && *str && *to_find == *str)
	{
		to_find++;
		str++;
	}
	return (*to_find == '\0');
}

char	*ft_strnstr(char *big, char *little, unsigned int len)
{
	char			*answer;
	unsigned int	i;
	int				size;

	if (*little == '\0')
		return (big);
	size = 0;
	while (little[size] != '\0')
		size++;
	i = 0;
	while (*big && i < len)
	{
		if (*big == *little)
		{
			answer = big;
			if (is_match(big, little) && i + size - 1 < len)
			{
				return (answer);
			}
		}
		i++;
		big++;
	}
	return (NULL);
}
