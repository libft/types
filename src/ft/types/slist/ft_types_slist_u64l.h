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

#ifndef FT_TYPES_SLIST_U64L_H
# define FT_TYPES_SLIST_U64L_H

# include "ft_types_array_u64l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_u64l_node
{
	struct s_ft_types_slist_u64l_node	*next;
	t_u64l								value;
}	t_ft_types_slist_u64l_node;

typedef struct s_ft_types_slist_u64l
{
	t_ft_types_slist_u64l_node	*head;
	t_ft_types_slist_u64l_node	*tail;
	size_t						length;
}	t_ft_types_slist_u64l;

void	ft_types_slist_u64l_init(
			t_ft_types_slist_u64l *list);
void	ft_types_slist_u64l_clear(
			t_ft_types_slist_u64l *list);
t_err	ft_types_slist_u64l_to_array(
			t_ft_types_slist_u64l *list,
			t_ft_types_array_u64l *out);
t_err	ft_types_slist_u64l_from_array(
			t_ft_types_array_u64l *array,
			t_ft_types_slist_u64l *out);
t_err	ft_types_slist_u64l_push(
			t_ft_types_slist_u64l *list,
			t_u64l value);
t_err	ft_types_slist_u64l_unshift(
			t_ft_types_slist_u64l *list,
			t_u64l value);
bool	ft_types_slist_u64l_shift(
			t_ft_types_slist_u64l *list,
			t_u64l *out);

#endif
