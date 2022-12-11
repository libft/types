/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_SLIST_U8L_H
# define FT_TYPES_SLIST_U8L_H

# include "ft_types_array_u8l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_u8l_node
{
	struct s_ft_types_slist_u8l_node	*next;
	t_u8l								value;
}	t_ft_types_slist_u8l_node;

typedef struct s_ft_types_slist_u8l
{
	t_ft_types_slist_u8l_node	*head;
	t_ft_types_slist_u8l_node	*tail;
	size_t						length;
}	t_ft_types_slist_u8l;

void	ft_types_slist_u8l_init(
			t_ft_types_slist_u8l *list);
void	ft_types_slist_u8l_clear(
			t_ft_types_slist_u8l *list);
t_err	ft_types_slist_u8l_to_array(
			t_ft_types_slist_u8l *list,
			t_ft_types_array_u8l *out);
t_err	ft_types_slist_u8l_from_array(
			t_ft_types_array_u8l *array,
			t_ft_types_slist_u8l *out);
t_err	ft_types_slist_u8l_push(
			t_ft_types_slist_u8l *list,
			t_u8l value);
t_err	ft_types_slist_u8l_unshift(
			t_ft_types_slist_u8l *list,
			t_u8l value);
bool	ft_types_slist_u8l_shift(
			t_ft_types_slist_u8l *list,
			t_u8l *out);

#endif
