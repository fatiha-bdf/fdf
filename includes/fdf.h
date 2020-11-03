/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 11:51:11 by fboudyaf          #+#    #+#             */
/*   Updated: 2019/03/20 13:14:30 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/includes/libft.h"
# include "struct.h"
# include "mlx.h"
# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <stdio.h>

int		ft_count_lines(int fd, t_check *check);
int     **parsing(int *j, int fd, char **argv, t_check *check);

int		**creat_tab(t_check *check);

int		end_by_fdftest(char *s);
int		basic_check(int argc, char **argv);

void	print_line(t_mlx *mlx, t_lim *point);
void	print_lineyello(t_mlx *mlx, t_lim *point);
void	fdf(t_mlx *mlx);

void	dxsmaller(t_mlx *mlx, int couleur, t_ptbrese *pt_brese);
void	dxbigger(t_mlx *mlx, int couleur, t_ptbrese *pt_brese);
void	line(t_mlx *mlx, t_lim *point, int couleur);

int		ft_key_hook(int keycode, t_mlx *mlx);

void	iso(int *x, int *y, int z);
void	get_x_y(t_mlx *mlx, t_lim *point, t_truc *coefij);
void	get_nextx(t_mlx *mlx, t_lim *point, t_truc *coefij);
void	get_nexty(t_mlx *mlx, t_lim *point, t_truc *coefij);

void	proj2(int *x, int *y, int z);
void	get_x_y2(t_mlx *mlx, t_lim *point, t_truc *coefij);
void	get_nextx2(t_mlx *mlx, t_lim *point, t_truc *coefij);
void	get_nexty2(t_mlx *mlx, t_lim *point, t_truc *coefij);

#endif
