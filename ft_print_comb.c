/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:02:20 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/21 12:00:57 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_print_comb(void)
	int i;
	int j;
	int k;
	for (i = 0; i <= 7; i++)
{
	for (j = i + 1; j <= 8; j++)
	{
		for (k = j + 1; k <= 9; k++);
		putchar(i);
		putchar(j);
		putchar(k);
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}

