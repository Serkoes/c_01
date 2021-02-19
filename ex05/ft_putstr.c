/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:12:23 by cchekov           #+#    #+#             */
/*   Updated: 2021/02/19 19:13:00 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	buff;
	int		i;

	i = 0;
	while (1)
	{
		buff = *(str + i);
		if (buff == '\0')
		{
			break ;
		}
		write(1, &buff, 1);
		i = i + 1;
	}
}
