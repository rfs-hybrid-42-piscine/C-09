/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:42:51 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/26 03:48:43 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_strlen(char *str)
 * @brief Calculates the length of a string.
 * @details Iterates through the character array until it hits the null byte.
 * @param str The string to measure.
 * @return The number of characters in the string.
 */
int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}
