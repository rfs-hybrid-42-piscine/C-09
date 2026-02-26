/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:35:36 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/26 03:45:42 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn void ft_swap(int *a, int *b)
 * @brief Swaps the values of two integers.
 * @details Takes two integer pointers and swaps the values stored at those
 * memory addresses using a temporary auxiliary variable.
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
