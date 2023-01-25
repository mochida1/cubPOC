/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmochida <hmochida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:00:33 by hmochida          #+#    #+#             */
/*   Updated: 2023/01/24 21:30:12 by hmochida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POC_H
# define POC_H

#define screenWidth 640
#define screenHeight 480
#define texWidth 64
#define texHeight 64
#define mapWidth 24
#define mapHeight 24

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		win_heigh;
	int		win_width;
	t_img	*img_list_head;
}	t_mlx;

typedef struct s_img
{
	char		*label;
	void		*img_ptr;
	char		*data;
	char		hide;
	int			index;
	int			h;
	int			w;
	int			bpp;
	int			sz_line;
	int			endian;
	int			win_x;
	int			win_y;
	void		*next;
}	t_img;

# define C_RED		0xff0000
# define C_GREEN	0x00ff00
# define C_BLUE		0x0000ff
# define C_YELLOW	0xffff00
# define C_WHITE	0xffffff

#endif
