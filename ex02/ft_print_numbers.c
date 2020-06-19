/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:18:10 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/19 13:37:25 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_numbers(void)
{
	int number;
	number = '1';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
}
int main(void)
{
	ft_print_numbers();
	return 0;
}
