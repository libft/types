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

#ifndef FT_TYPES_SLIST_U32L_H
# define FT_TYPES_SLIST_U32L_H

# include "ft_types_array_u32l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_u32l_node
{
	struct s_ft_types_slist_u32l_node	*next;
	t_u32l								value;
}	t_ft_types_slist_u32l_node;

typedef struct s_ft_types_slist_u32l
{
	t_ft_types_slist_u32l_node	*head;
	t_ft_types_slist_u32l_node	*tail;
	size_t						length;
}	t_ft_types_slist_u32l;

void	ft_types_slist_u32l_init(
			t_ft_types_slist_u32l *list);
void	ft_types_slist_u32l_clear(
			t_ft_types_slist_u32l *list);
t_err	ft_types_slist_u32l_to_array(
			t_ft_types_slist_u32l *list,
			t_ft_types_array_u32l *out);
t_err	ft_types_slist_u32l_from_array(
			t_ft_types_array_u32l *array,
			t_ft_types_slist_u32l *out);
t_err	ft_types_slist_u32l_push(
			t_ft_types_slist_u32l *list,
			t_u32l value);
t_err	ft_types_slist_u32l_unshift(
			t_ft_types_slist_u32l *list,
			t_u32l value);
bool	ft_types_slist_u32l_shift(
			t_ft_types_slist_u32l *list,
			t_u32l *out);

#endif
