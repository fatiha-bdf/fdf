/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 11:53:13 by fboudyaf          #+#    #+#             */
/*   Updated: 2019/03/20 11:53:18 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		**creat_tab(t_check *check)
{
	int		**board;
	int		*lilboard;
	int		i;

	i = 0;
	if (!(board = (int **)malloc(sizeof(board) * (check->line))))
		return (NULL);
	if (!(lilboard = (int *)malloc(sizeof(lilboard) \
					* (check->line * check->col))))
		return (NULL);
	while (i < check->line)
	{
		board[i] = &lilboard[i * check->col];
		i++;
	}
	return (board);
}
