/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchekov <cchekov@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:12:23 by cchekov           #+#    #+#             */
/*   Updated: 2021/02/19 20:00:31 by cchekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;
	char	buff;

	i = 0;
	buff = '0';
	while (buff != '\0')
	{
		buff = *(str + i);
		i = i + 1;
	}
	return (i - 1);
}
