/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:10:30 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/26 03:45:55 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn void ft_putchar(char c)
 * @brief Outputs a single character to the standard output.
 * @details Uses the write system call to print the character passed as a 
 * parameter to file descriptor 1 (stdout).
 * @param c The character to be printed.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
