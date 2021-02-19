/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:12:23 by cchekov           #+#    #+#             */
/*   Updated: 2021/02/19 20:00:31 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int buff;
	int	finish;
	int i;

	i = 0;
	if (size % 2 == 0)
		finish = size / 2;
	else
		finish = size / 2 - 1;
	size = size - 1;
	while (i <= finish)
	{
		buff = *(tab + i);
		*(tab + i) = *(tab + size - i);
		*(tab + size - i) = buff;
		i = i + 1;
	}
}
