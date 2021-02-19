/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:12:23 by cchekov           #+#    #+#             */
/*   Updated: 2021/02/19 20:00:31 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int sorted;
	int i;

	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				*(tab + i) = *(tab + i) + *(tab + i + 1);
				*(tab + i + 1) = *(tab + i) - *(tab + i + 1);
				*(tab + i) = *(tab + i) - *(tab + i + 1);
				sorted = 0;
			}
			i = i + 1;
		}
	}
}
