/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:22:18 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/23 13:31:43 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_putnbr(int nb)
{
	printf("Enter number\n");
		scanf("%d", &nb);
	printf("%d", nb);
}
int main()
{
	ft_putnbr(42);
	return 0;
}