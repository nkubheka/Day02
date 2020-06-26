/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:28:27 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/26 13:30:17 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}
