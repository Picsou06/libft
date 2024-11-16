/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evdalmas <evdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:32:51 by evdalmas          #+#    #+#             */
/*   Updated: 2024/11/04 17:27:54 by evdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}