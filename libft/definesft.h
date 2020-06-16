/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definesft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 11:54:33 by flourdau          #+#    #+#             */
/*   Updated: 2015/08/22 18:42:44 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINESFT_H
# define DEFINESFT_H

/*
**		FLAGS FT_PRINTF
*/
/*
**		BIT POID FORT 32768
*/
# define Z_TAG				0b1000000000000000
# define J_TAG				0b0100000000000000
# define LL_TAG				0b0010000000000000
# define L_TAG				0b0001000000000000
# define H_TAG				0b0000100000000000
# define HH_TAG				0b0000010000000000
# define NEG_TAG			0b0000001000000000
# define SIGNED_TAG			0b0000000100000000
# define MAJ_TAG			0b0000000010000000
# define WIDTH_TAG			0b0000000001000000
# define PRECISION_TAG		0b0000000000100000
# define SPECIAL_TAG		0b0000000000010000
# define LEFT_TAG			0b0000000000001000
# define SPACE_TAG			0b0000000000000100
# define PLUS_TAG			0b0000000000000010
# define ZEROPAD_TAG		0b0000000000000001
# define INIT_TAG			0b0000000000000000

# define Z					s->flags & Z_TAG
# define J					s->flags & J_TAG
# define LL					s->flags & LL_TAG
# define L					s->flags & L_TAG
# define H					s->flags & H_TAG
# define HH					s->flags & HH_TAG
# define NEG				s->flags & NEG_TAG
# define SIGNED				s->flags & SIGNED_TAG
# define MAJ				s->flags & MAJ_TAG
# define WIDTH				s->flags & WIDTH_TAG
# define PRECISION			s->flags & PRECISION_TAG
# define SPECIAL			s->flags & SPECIAL_TAG
# define LEFT				s->flags & LEFT_TAG
# define SPACE				s->flags & SPACE_TAG
# define PLUS				s->flags & PLUS_TAG
# define ZEROPAD			s->flags & ZEROPAD_TAG
/*
**		FT_GNL
*/
# define BUFF_SIZE 			MAJ_TAG
/*
**		MLX
*/
# define WIN_WIDTH			1920
# define WIN_HEIGHT			1080
# define X1					env->coord[1].x
# define Y1					env->coord[1].y
# define X2					env->coord[2].x
# define Y2					env->coord[2].y
# define XT					env->coord[3].x
# define YT					env->coord[3].y
/*
**		Key_Blind
*/
# define K_C				8
# define K_R				15
# define K_T				17
# define K_SPACE			49
# define K_ECHAP			53
# define K_PLUS_NUM			69
# define K_LESS_NUM			78
# define K_PAGE_DOWN		116
# define K_PAGE_UP			121
# define K_LEFT				123
# define K_RIGHT			124
# define K_DOWN				125
# define K_UP				126

# define K_PLUS				69
# define K_MOIN				78
# define K_HOME				115
# define K_DEL				117
# define K_END				119
# define K_FN				263

/*
**		Mouse_Blind
*/
# define M_BUTTON_1			1
# define M_BUTTON_2			2
# define M_BUTTON_3			3
# define M_MOLETTE_UP		4
# define M_MOLETTE_DOWN		5
# define M_MOLETTE_LEFT		6
# define M_MOLETTE_RIGHT	7

#endif
