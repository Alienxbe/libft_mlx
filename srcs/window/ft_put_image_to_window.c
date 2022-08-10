/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_image_to_window.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 06:24:07 by mykman            #+#    #+#             */
/*   Updated: 2022/08/10 06:26:16 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libft_mlx.h"

t_bool	ft_put_image_to_window(void *mlx_ptr, t_window win, t_img img,
			t_point pos)
{
	mlx_put_image_to_window(mlx_ptr, win.win_ptr, img.img, pos.x, pos.y);
	return (true);
}