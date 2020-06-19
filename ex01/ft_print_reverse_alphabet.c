/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:04:31 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/19 13:10:19 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while  (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
