/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 04:18:36 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/26 04:18:38 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* --- Prototype --- */
char	**ft_split(char *str, char *charset);

/* --- Helper Function to Print and Free --- */
void	run_split_test(char *str, char *charset, char *test_name)
{
	char	**split;
	int		i;

	printf("========================================\n");
	printf("[ %s ]\n", test_name);
	printf("String : \"%s\"\n", str);
	printf("Charset: \"%s\"\n", charset);
	printf("----------------------------------------\n");
	
	split = ft_split(str, charset);
	if (!split)
	{
		printf("Result : NULL (Allocation failed or invalid input)\n\n");
		return ;
	}
	
	i = 0;
	while (split[i] != NULL)
	{
		printf("Word %d : \"%s\"\n", i, split[i]);
		free(split[i]);
		i++;
	}
	printf("Word %d : NULL\n", i);
	printf("========================================\n\n");
	free(split);
}

/* --- Main Testing Function --- */
int	main(void)
{
	/* Test 1: Standard normal use-case */
	run_split_test("Hello,,World! , 42Piscine", ", ", "Test 1: Standard Split");
	
	/* Test 2: No separators present in the string */
	run_split_test("NoSeparatorsHere", "-*", "Test 2: No Separators Present");
	
	/* Test 3: String is made entirely of separators */
	run_split_test("---,-,---,,--", "-,", "Test 3: Only Separators");
	
	/* Test 4: Empty string */
	run_split_test("", "abc", "Test 4: Empty String Input");
	
	/* Test 5: Leading, trailing, and massive consecutive separators */
	run_split_test("   Spacing   is   fun   ", " ", "Test 5: Edge Whitespaces");

	return (0);
}
